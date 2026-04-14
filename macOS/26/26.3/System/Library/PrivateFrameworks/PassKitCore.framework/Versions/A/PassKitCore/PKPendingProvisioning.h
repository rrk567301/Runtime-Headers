@class NSString, PKSecureElementProvisioningState, NSDate;

@interface PKPendingProvisioning : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) BOOL shouldAutoProvision;
@property (nonatomic) unsigned long long provisioningAttemptCounter;
@property (retain, nonatomic) PKSecureElementProvisioningState *provisioningState;

- (id)type;
- (id)description;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)credential;
- (void)encodeWithCoder:(id)a0;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 status:(long long)a1;
- (BOOL)representsCredential:(id)a0;
- (void)setCanRetryProvisioning:(BOOL)a0;

@end
