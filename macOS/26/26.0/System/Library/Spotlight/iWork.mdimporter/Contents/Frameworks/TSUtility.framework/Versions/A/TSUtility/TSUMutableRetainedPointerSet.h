@interface TSUMutableRetainedPointerSet : TSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)allObjects;

@end
