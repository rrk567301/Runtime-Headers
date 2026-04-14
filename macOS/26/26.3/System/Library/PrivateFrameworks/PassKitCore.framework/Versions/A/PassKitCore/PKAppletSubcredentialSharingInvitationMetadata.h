@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *anonymizationSalt;
@property (nonatomic) BOOL shouldRequestInvitation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
