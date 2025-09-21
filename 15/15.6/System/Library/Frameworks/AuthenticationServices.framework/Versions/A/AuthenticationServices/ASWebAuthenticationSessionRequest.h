@class NSData, NSString, NSArray, ASWebAuthenticationSessionController, NSSet, NSUUID, NSURL, NSDictionary, ASWebAuthenticationSessionCallback;
@protocol ASWebAuthenticationSessionRequestDelegate;

@interface ASWebAuthenticationSessionRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) ASWebAuthenticationSessionController *controller;
@property (readonly, nonatomic) NSSet *requestingAppSupportedSchemes;
@property (nonatomic) char shouldForceiOSUserAgent;
@property (readonly, nonatomic) char jitEnabled;
@property (retain, nonatomic) NSData *callerAuditTokenData;
@property (retain, nonatomic) NSArray *customAnchorCertificatesData;
@property (nonatomic) char shouldFailOnMDMProfileErrorResponse;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *callbackURLScheme;
@property (readonly, nonatomic) char shouldUseEphemeralSession;
@property (weak, nonatomic) id<ASWebAuthenticationSessionRequestDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *additionalHeaderFields;
@property (readonly, nonatomic) ASWebAuthenticationSessionCallback *callback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancelWithError:(id)a0;
- (void)completeWithCallbackURL:(id)a0;
- (id)initWithUUID:(id)a0 URL:(id)a1 callback:(id)a2 shouldUseEphemeralSession:(char)a3 jitEnabled:(char)a4 requestingAppSupportedSchemes:(id)a5 additionalHeaderFields:(id)a6 customAnchorCertificatesData:(id)a7 shouldFailOnMDMProfileErrorResponse:(char)a8;

@end
