@class NSString, PKSharingMessage;

@interface PKPassSharePendingActivation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PKSharingMessage *originalInvitation;
@property (retain, nonatomic) NSString *shareIdentifier;
@property (nonatomic) char isWaitingOnUserAction;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToPassSharePendingActivation:(id)a0;

@end
