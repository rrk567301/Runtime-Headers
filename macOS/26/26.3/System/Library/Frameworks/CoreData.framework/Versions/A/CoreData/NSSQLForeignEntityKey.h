@class NSString, NSSQLForeignKey, NSNumber;

@interface NSSQLForeignEntityKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
    NSNumber *_columnValue;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;
- (id)name;
- (id)foreignKey;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initWithEntity:(id)a0 foreignKey:(id)a1;
- (id)toOneRelationship;

@end
