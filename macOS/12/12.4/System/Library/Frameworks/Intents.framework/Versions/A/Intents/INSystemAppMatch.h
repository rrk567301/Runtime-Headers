@class NSString;

@interface INSystemAppMatch : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifierForCurrentPlatform;
@property (readonly, nonatomic) BOOL appIsUnavailableOnCurrentPlatform;

+ (id)appExistsButIsUnavailableOnCurrentPlatform;
+ (id)matchWithBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 appIsUnavailableOnCurrentPlatform:(BOOL)a1;

@end
