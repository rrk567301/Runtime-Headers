@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest

@property (copy, nonatomic) NSString *secondaryAuthToken;
@property (copy, nonatomic) NSString *heartbeatToken;

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;
- (BOOL)forceGSToken;

@end
