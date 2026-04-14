@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest

@property (copy, nonatomic) NSString *secondaryAuthToken;
@property (copy, nonatomic) NSString *heartbeatToken;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (BOOL)forceGSToken;
- (void).cxx_destruct;

@end
