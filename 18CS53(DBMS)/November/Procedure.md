# to create procedure

```
create procedure procedure_name(paramlist)
BEGIN
    // statements;
END
```

# to execute procedure

```
call procedure_name(argument_list)
```

# example procedure creation

```
creating delimiter since multi lined statment
delimiter //

create procedure sample()
    BEGIN
        select * from CLASS;
    END
    //

change back default delimeter to ;
delimiter ;

```

# example procedure execution

```
call smaple()
```

# modes of params

- IN is default mode

```
delimiter //

create procedure sample1(in v1 varchar(20))
    BEGIN
        delete from CLASS where USN = v1;
    END
    //
delimeter ;
call sample1('1JT14CS032')
```

- OUT param (cannot get out param value by procedure and can oinly be overwriten)

```
delimeter //
create procedure sample2(in v1 varchar(20), out v2 varchar(20))
BEGIN
    select count(*) into v2 from class usn = v1
END
//
delimeter ;

call sample2('1JT13CS091', @tot);
select @tot;
```

- INOUT param (procedure can both read and write this param)

```
delimiter //
create procedure inc(inout v1 int)
BEGIN
    set v1 = v1 + 1
END
//
delimeter ;

set @v3 = 5;
call inc(@v3);
select @v3;
```

```
categorize students based on the folllowing criterion;
if finalia = 17 to 20 then cat = 'outstanding'
if finalia = 12 to 16 then cat = 'average'
if finalia < 12 then cat = 'weak'
Give these details only for 8th semester A,B and C section students.

create procedure compute_cat(in finalia int, out cat varchar(20))
BEGIN
    case
        when finalia = 17 and finalia <= 20
            THEN out = 'outstanding'
        when finalia = 12 and finalia <= 16
            THEN out = 'average'
        else
            out = 'weak
END
```
