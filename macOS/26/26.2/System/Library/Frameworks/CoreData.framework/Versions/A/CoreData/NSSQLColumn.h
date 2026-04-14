@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned char)sqlType;
- (id)initForReadOnlyFetching;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)columnName;
- (id)description;
- (unsigned int)slot;
- (void)dealloc;

@end
