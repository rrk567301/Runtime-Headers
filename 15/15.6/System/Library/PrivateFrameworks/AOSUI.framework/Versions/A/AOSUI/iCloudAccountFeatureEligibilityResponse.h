@interface iCloudAccountFeatureEligibilityResponse : AAResponse

@property (readonly, nonatomic) char enable;
@property (readonly, nonatomic) char showNotification;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
