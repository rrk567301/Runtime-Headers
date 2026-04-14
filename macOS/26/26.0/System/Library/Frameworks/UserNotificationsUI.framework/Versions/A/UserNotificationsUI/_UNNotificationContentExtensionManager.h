@class _UNNotificationContentExtensionCache;

@interface _UNNotificationContentExtensionManager : NSObject

@property (retain, nonatomic) _UNNotificationContentExtensionCache *extensionsCache;
@property (retain, nonatomic) id extensionsDiscoveryToken;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)_beginMatchingExtensions;
- (id)_matchingAttributes;
- (void)_stopMatchingExtensions;
- (id)extensionForNotificationSourceIdentifier:(id)a0 categoryIdentifier:(id)a1;

@end
