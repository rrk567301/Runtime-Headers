@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    long long refCount;
    id realObject;
}

+ (void /* unknown type, empty encoding */)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (void)forwardInvocation:(id)a0;

- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isProxy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initDir:(id)a0 file:(id)a1 docInfo:(id)a2;
- (void)reallyDealloc;

@end
