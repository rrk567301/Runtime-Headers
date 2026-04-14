@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned int)slot;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)columnName;
- (unsigned char)sqlType;
- (id)description;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetching;

@end
