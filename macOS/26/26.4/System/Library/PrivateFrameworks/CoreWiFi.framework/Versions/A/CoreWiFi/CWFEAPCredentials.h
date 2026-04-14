@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {
    void *_TLSIdentityHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (copy, nonatomic) void *TLSIdentityHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (struct __SecIdentity { } *)TLSIdentity;
- (void *)TLSIdentityHandle;
- (BOOL)isEqualToEAPCredentials:(id)a0;
- (void)setTLSIdentityHandle:(void *)a0;

@end
