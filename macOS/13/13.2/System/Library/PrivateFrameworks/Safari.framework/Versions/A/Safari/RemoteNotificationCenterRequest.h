@class NSString;

@interface RemoteNotificationCenterRequest : NSObject

@property (readonly, nonatomic) NSString *websiteIdentifier;

- (void).cxx_destruct;
- (id)initWithWebsiteIdentifier:(id)a0;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (void)centerDelegateRequestDidFail;

@end
