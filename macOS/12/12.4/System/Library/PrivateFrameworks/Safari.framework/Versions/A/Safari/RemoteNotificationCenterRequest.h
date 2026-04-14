@class NSString;

@interface RemoteNotificationCenterRequest : NSObject

@property (readonly, nonatomic) NSString *websiteIdentifier;

- (void).cxx_destruct;
- (void)centerDelegateRequestDidFail;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (id)initWithWebsiteIdentifier:(id)a0;

@end
