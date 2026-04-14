@interface EKPersistentImage : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)identifier;
- (void)setName:(id)a0;
- (long long)type;
- (void)setSource:(id)a0;
- (void)setType:(long long)a0;
- (int)entityType;
- (id)name;
- (void)setIdentifier:(id)a0;
- (id)source;
- (id)colorData;
- (void)setColorData:(id)a0;

@end
