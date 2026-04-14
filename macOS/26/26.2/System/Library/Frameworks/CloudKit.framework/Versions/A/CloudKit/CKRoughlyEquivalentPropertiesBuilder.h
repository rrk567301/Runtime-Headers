@class NSMutableDictionary, CKRoughlyEquivalentProperties;

@interface CKRoughlyEquivalentPropertiesBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *properties;

- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)addComplexObject:(id)a0 forKey:(id)a1;
- (void)addPlistObject:(id)a0 forKey:(id)a1;
- (void)addPlistObjects:(id)a0;

@end
