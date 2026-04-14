@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (void)dealloc;
- (id)description;
- (unsigned char)sqlType;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetching;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (unsigned int)slot;
- (id)columnName;

@end
