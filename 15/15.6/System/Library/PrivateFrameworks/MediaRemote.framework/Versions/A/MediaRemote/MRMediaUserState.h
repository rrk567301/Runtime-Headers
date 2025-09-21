@class NSString, MRUserIdentity;

@interface MRMediaUserState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char isMinor;
@property (nonatomic) char isFullSubscriber;
@property (nonatomic) char hasAcceptedPrivacyAcknowledgement;
@property (nonatomic) char hasAcceptedDisplayNameAcknowledgement;
@property (nonatomic) char identitySupportsCollaboration;
@property (nonatomic) char groupSessionsSupportedForAccountRegion;
@property (retain, nonatomic) NSString *storefrontCountryCode;
@property (retain, nonatomic) MRUserIdentity *userIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
