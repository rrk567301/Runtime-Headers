@class NSString;

@interface _WKWebPushDaemonConnectionConfiguration : NSObject

@property (copy, nonatomic) NSString *machServiceName;
@property (copy, nonatomic) NSString *partition;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)init;

@end
