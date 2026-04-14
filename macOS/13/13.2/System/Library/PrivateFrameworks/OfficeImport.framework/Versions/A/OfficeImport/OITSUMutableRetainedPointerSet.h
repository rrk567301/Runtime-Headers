@interface OITSUMutableRetainedPointerSet : OITSUMutablePointerSet

+ (Class)privateNonMutableClass;
+ (Class)privateMutableClass;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;

@end
