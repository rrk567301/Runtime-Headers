@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying>

@property (readonly) NSObject *object;

+ (char)clearVars;
+ (struct { Class x0; id x1; id x2; char x3; char x4; } *)poolInfo;
+ (id)retainingKeyWithObject:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void)purge;

@end
