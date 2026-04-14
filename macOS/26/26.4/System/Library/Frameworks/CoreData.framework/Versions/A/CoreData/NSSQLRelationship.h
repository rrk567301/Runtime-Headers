@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)name;
- (id)sourceEntity;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (id)correlationTableName;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)_setForeignOrderKey:(id)a0;
- (void)dealloc;
- (id)destinationEntity;

@end
