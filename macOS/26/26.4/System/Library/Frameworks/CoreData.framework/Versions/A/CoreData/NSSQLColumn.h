@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned char)sqlType;
- (unsigned int)slot;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetching;
- (id)columnName;
- (id)description;
- (void)dealloc;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;

@end
