@interface TSUMutableRetainedPointerSet : TSUMutablePointerSet

+ (Class)privateNonMutableClass;
+ (Class)privateMutableClass;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;

@end
