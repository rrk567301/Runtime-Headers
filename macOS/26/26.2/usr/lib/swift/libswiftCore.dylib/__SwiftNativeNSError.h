@interface __SwiftNativeNSError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)domain;
- (long long)code;
- (id)userInfo;
- (id)description;
- (void)dealloc;

@end
