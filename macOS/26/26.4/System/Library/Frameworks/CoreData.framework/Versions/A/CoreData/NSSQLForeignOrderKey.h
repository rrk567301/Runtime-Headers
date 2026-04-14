@class NSString, NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (id)toOneRelationship;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;
- (id)initWithEntity:(id)a0 foreignKey:(id)a1;
- (void)dealloc;

@end
