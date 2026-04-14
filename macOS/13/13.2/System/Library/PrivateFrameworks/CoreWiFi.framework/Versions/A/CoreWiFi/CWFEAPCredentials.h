@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {
    void *_TLSIdentityHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (copy, nonatomic) const void *TLSIdentityHandle;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct __SecIdentity { } *)TLSIdentity;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (const void *)TLSIdentityHandle;
- (void)setTLSIdentityHandle:(const void *)a0;
- (BOOL)isEqualToEAPCredentials:(id)a0;

@end
