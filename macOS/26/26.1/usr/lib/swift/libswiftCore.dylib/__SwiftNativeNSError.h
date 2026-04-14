@interface __SwiftNativeNSError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)userInfo;
- (long long)code;
- (Class)classForCoder;
- (id)domain;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
