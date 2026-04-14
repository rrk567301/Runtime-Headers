@interface __SwiftNativeNSError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (long long)code;
- (id)description;
- (Class)classForCoder;
- (id)domain;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)userInfo;

@end
