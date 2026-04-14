@interface TSURetainedPointerSet : TSUPointerSet

+ (Class)privateNonMutableClass;
+ (Class)privateMutableClass;

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)allObjects;

@end
