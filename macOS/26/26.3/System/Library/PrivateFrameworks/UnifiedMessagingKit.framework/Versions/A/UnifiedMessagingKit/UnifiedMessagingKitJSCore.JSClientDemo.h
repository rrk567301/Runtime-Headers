@class NSDictionary, NSString;

@interface UnifiedMessagingKitJSCore.JSClientDemo : NSObject <UnifiedMessagingKitJSCore.JSClientDemoExports>

@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) BOOL inStoreDemoMode;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSString *storeId;

- (id)init;

@end
