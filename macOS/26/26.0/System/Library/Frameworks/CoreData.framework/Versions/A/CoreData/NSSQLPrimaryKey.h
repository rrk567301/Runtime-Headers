@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)name;

@end
