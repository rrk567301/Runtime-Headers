@class NSSet, NSUUID, ASWebAuthenticationSessionController, NSURL, NSString;
@protocol ASWebAuthenticationSessionRequestDelegate;

@interface ASWebAuthenticationSessionRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) ASWebAuthenticationSessionController *controller;
@property (readonly, nonatomic) NSSet *requestingAppSupportedSchemes;
@property (nonatomic) BOOL shouldForceiOSUserAgent;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *callbackURLScheme;
@property (readonly, nonatomic) BOOL shouldUseEphemeralSession;
@property (weak, nonatomic) id<ASWebAuthenticationSessionRequestDelegate> delegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)initWithUUID:(id)a0 URL:(id)a1 callbackURLScheme:(id)a2 shouldUseEphemeralSession:(BOOL)a3 requestingAppSupportedSchemes:(id)a4;
- (id)initWithUUID:(id)a0 URL:(id)a1 callbackURLScheme:(id)a2 shouldUseEphemeralSession:(BOOL)a3;
- (void)completeWithCallbackURL:(id)a0;

@end
