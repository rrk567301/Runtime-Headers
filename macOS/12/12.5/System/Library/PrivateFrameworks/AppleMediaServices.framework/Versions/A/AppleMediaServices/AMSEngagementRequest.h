@class NSString, NSDictionary, NSURL, ACAccount;

@interface AMSEngagementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

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

+ (id)engagementRequestWithDictionary:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_accountFromDictionary:(id)a0;
- (long long)_engagementPresentationStyleFromDictionary:(id)a0;
- (id)initWithRequestDictionary:(id)a0;

@end
