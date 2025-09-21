@class NSString, NSDictionary, NSData, ACAccount, NSURL;

@interface AMSEngagementRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSData *modelData;
@property (retain) ACAccount *account;
@property char anonymousMetrics;
@property (retain) NSDictionary *clientData;
@property (retain) NSString *logKey;
@property char failOnDismiss;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSURL *originatingURL;
@property long long presentationStyle;
@property (retain) NSURL *URL;
@property char silentlyCheckURL;
@property long long destinationStyle;
@property char suppressInteractiveModalDismissal;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithModel:(id)a0;
- (id)initWithModel:(id)a0 destinationStyle:(long long)a1;
- (id)_accountFromDictionary:(id)a0;
- (long long)_engagementPresentationStyleFromDictionary:(id)a0;
- (void)applyOverlayMetrics:(id)a0;
- (id)exportObject;
- (id)initWithRequestDictionary:(id)a0;
- (id)modelForClass:(Class)a0 error:(id *)a1;
- (void)replaceOverlayMetrics:(id)a0;

@end
