@class NSString, MRUserIdentity;

@interface MRMediaUserState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isMinor;
@property (nonatomic) BOOL isFullSubscriber;
@property (nonatomic) BOOL hasAcceptedPrivacyAcknowledgement;
@property (nonatomic) BOOL hasAcceptedDisplayNameAcknowledgement;
@property (nonatomic) BOOL identitySupportsCollaboration;
@property (nonatomic) BOOL groupSessionsSupportedForAccountRegion;
@property (retain, nonatomic) NSString *storefrontCountryCode;
@property (retain, nonatomic) MRUserIdentity *userIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
