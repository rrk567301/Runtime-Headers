@class NSString, PKSharingMessage;

@interface PKPassSharePendingActivation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSharingMessage *originalInvitation;
@property (retain, nonatomic) NSString *shareIdentifier;
@property (nonatomic) BOOL isWaitingOnUserAction;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPassSharePendingActivation:(id)a0;

@end
