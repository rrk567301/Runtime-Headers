@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying>

@property (readonly) NSObject *object;

+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;
+ (BOOL)clearVars;
+ (id)retainingKeyWithObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithObject:(id)a0;
- (void)purge;

@end
