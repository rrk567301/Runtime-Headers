@interface EKPersistentImage : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setIdentifier:(id)a0;
- (id)name;
- (int)entityType;
- (void)setName:(id)a0;
- (id)source;
- (void)setType:(long long)a0;
- (long long)type;
- (id)identifier;
- (void)setSource:(id)a0;
- (id)colorData;
- (void)setColorData:(id)a0;

@end
