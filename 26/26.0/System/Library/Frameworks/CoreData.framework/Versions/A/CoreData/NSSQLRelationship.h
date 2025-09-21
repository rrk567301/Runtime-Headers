@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)destinationEntity;
- (void)dealloc;
- (id)sourceEntity;
- (void)_setForeignOrderKey:(id)a0;
- (id)correlationTableName;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)name;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;

@end
