@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned int)slot;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)description;
- (id)initForReadOnlyFetching;
- (unsigned char)sqlType;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)columnName;

@end
