@interface EKPersistentImage : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)identifier;
- (void)setType:(long long)a0;
- (void)setName:(id)a0;
- (id)source;
- (void)setIdentifier:(id)a0;
- (void)setSource:(id)a0;
- (long long)type;
- (int)entityType;
- (id)name;
- (id)colorData;
- (void)setColorData:(id)a0;

@end
