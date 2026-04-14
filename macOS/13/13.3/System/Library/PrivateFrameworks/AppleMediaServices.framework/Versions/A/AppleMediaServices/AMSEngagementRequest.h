@class NSString, NSDictionary, NSData, ACAccount, NSURL;

@interface AMSEngagementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *modelData;
@property (retain) ACAccount *account;
@property (retain) NSDictionary *clientData;
@property (retain) NSString *logKey;
@property BOOL failOnDismiss;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSURL *originatingURL;
@property long long presentationStyle;
@property (retain) NSURL *URL;
@property BOOL silentlyCheckURL;
@property long long destinationStyle;
@property BOOL suppressInteractiveModalDismissal;

+ (id)engagementRequestWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModel:(id)a0;
- (id)initWithModel:(id)a0 destinationStyle:(long long)a1;
- (id)_accountFromDictionary:(id)a0;
- (long long)_engagementPresentationStyleFromDictionary:(id)a0;
- (id)initWithRequestDictionary:(id)a0;
- (id)modelForClass:(Class)a0 error:(id *)a1;

@end
