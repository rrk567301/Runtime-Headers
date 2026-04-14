@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)dealloc;
- (id)name;
- (id)destinationEntity;
- (id)foreignKey;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)sourceEntity;
- (id)correlationTableName;
- (void)_setForeignOrderKey:(id)a0;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;

@end
