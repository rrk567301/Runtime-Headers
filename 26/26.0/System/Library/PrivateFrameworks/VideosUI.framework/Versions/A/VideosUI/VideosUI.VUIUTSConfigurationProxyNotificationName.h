@class NSString;

@interface VideosUI.VUIUTSConfigurationProxyNotificationName : NSObject

@property (class, nonatomic, readonly) NSString *configurationDidChange;
@property (class, nonatomic, readonly) NSString *utskDidChange;

- (id)init;

@end
