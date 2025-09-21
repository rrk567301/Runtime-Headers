@class NSString, NSDictionary, NSURL, NSData;

@interface SOAuthorizationRequestParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *requestedOperation;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSString *realm;
@property (copy, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSData *auditTokenData;
@property (copy, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic) char useInternalExtensions;
@property (nonatomic) long long responseCode;
@property (nonatomic, getter=isCFNetworkInterception) char cfNetworkInterception;
@property (nonatomic, getter=isCallerManaged) char callerManaged;
@property (copy, nonatomic) NSString *callerTeamIdentifier;
@property (copy, nonatomic) NSString *localizedCallerDisplayName;
@property (nonatomic, getter=isUserInteractionEnabled) char enableUserInteraction;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier;
@property (nonatomic) long long pssoAuthenticationMethod;
@property (nonatomic, getter=canShowOnCoverScreen) char showOnCoverScreen;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationRequestParametersCore:(id)a0;

@end
