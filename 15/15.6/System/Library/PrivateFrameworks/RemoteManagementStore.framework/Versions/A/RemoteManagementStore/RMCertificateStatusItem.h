@class NSData;

@interface RMCertificateStatusItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *persistentRef;
@property (readonly, nonatomic) char isIdentity;

+ (id)certificateStatusItemWithPersistentRef:(id)a0 isIdentity:(char)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWithPersistentRef:(id)a0 isIdentity:(char)a1;
- (char)isEqualToCertificateStatus:(id)a0;

@end
