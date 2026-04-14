@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying>

@property (readonly) NSObject *object;

+ (BOOL)clearVars;
+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;
+ (id)retainingKeyWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)purge;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;

@end
