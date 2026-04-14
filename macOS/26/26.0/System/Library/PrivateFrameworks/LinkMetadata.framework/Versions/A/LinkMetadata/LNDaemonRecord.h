@class NSString;

@interface LNDaemonRecord : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;

+ (id)enumerated;
+ (id)daemonRecordWithBundleIdentifier:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithDaemonRecord:(id)a0;

@end
