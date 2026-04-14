@interface EKPersistentImage : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setType:(long long)a0;
- (long long)type;
- (id)identifier;
- (id)source;
- (void)setIdentifier:(id)a0;
- (id)name;
- (int)entityType;
- (void)setSource:(id)a0;
- (void)setName:(id)a0;
- (id)colorData;
- (void)setColorData:(id)a0;

@end
