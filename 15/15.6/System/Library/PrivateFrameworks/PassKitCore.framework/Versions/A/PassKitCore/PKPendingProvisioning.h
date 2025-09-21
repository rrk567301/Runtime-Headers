@class NSString, PKSecureElementProvisioningState, NSDate;

@interface PKPendingProvisioning : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) char shouldAutoProvision;
@property (nonatomic) unsigned long long provisioningAttemptCounter;
@property (retain, nonatomic) PKSecureElementProvisioningState *provisioningState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)_init;
- (id)credential;
- (char)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 status:(long long)a1;
- (char)representsCredential:(id)a0;
- (void)setCanRetryProvisioning:(char)a0;

@end
