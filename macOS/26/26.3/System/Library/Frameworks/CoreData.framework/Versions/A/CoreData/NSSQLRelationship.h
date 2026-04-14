@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)_setForeignOrderKey:(id)a0;
- (id)sourceEntity;
- (id)name;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)destinationEntity;
- (id)foreignKey;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)correlationTableName;

@end
