@interface __SwiftNativeNSError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (long long)code;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)domain;
- (BOOL)isEqual:(id)a0;
- (id)userInfo;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;

@end
