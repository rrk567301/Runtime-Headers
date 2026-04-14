@interface EKPersistentImage : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (long long)type;
- (void)setIdentifier:(id)a0;
- (void)setSource:(id)a0;
- (id)source;
- (void)setName:(id)a0;
- (void)setType:(long long)a0;
- (id)identifier;
- (id)name;
- (id)colorData;
- (void)setColorData:(id)a0;

@end
