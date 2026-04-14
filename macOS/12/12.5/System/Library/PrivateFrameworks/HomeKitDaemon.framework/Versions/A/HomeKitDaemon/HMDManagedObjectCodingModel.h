@class NSManagedObjectModel, NSMutableDictionary, NSString;

@interface HMDManagedObjectCodingModel : NSObject {
    NSManagedObjectModel *_model;
    unsigned long long _options;
    NSMutableDictionary *_descriptions;
    NSString *_typeIDConfigKey;
    NSString *_keyAttributesConfigKey;
    NSString *_includeConfigKey;
    NSString *_codingKeyConfigKey;
    NSString *_transformerConfigKey;
    BOOL _hasAnyReferenceRelationships;
}

@property (class, readonly) unsigned long long defaultOptions;

@property (readonly) BOOL hasOnlyParentChildRelationships;

- (void).cxx_destruct;
- (id)decodeRootEntity:(id)a0 fromReader:(id)a1;
- (BOOL)encodeRootObject:(id)a0 withWriter:(id)a1;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntityNames:(id)a2 options:(unsigned long long)a3;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntities:(id)a2 options:(unsigned long long)a3;
- (BOOL)isReferenceRelationship:(id)a0;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntityNames:(id)a2;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntities:(id)a2;
- (id)descriptionForEntity:(id)a0;
- (id)descriptionForRelationship:(id)a0;
- (id)descriptionForManagedObject:(id)a0;
- (id)subentityOfDescription:(id)a0 withTypeID:(id)a1;
- (id)transformerNameForAttribute:(id)a0;
- (BOOL)shouldIncludeRelationship:(id)a0;
- (BOOL)isParentChildRelationship:(id)a0;
- (BOOL)encodeRootObject:(id)a0 forEntity:(id)a1 withWriter:(id)a2;
- (BOOL)updateRootObject:(id)a0 fromReader:(id)a1;
- (id)insertOrUpdateRootObjectForEntity:(id)a0 inContext:(id)a1 fromReader:(id)a2;

@end
