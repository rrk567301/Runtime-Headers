@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned int)slot;
- (unsigned char)sqlType;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)columnName;
- (id)initForReadOnlyFetching;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)description;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;

@end
