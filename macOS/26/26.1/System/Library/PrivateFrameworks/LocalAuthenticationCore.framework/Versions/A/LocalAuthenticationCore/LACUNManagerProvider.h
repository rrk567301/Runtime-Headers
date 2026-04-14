@class NSMutableDictionary;

@interface LACUNManagerProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedInstances;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)sharedInstanceWithBundleIdentifier:(id)a0 categories:(id)a1 replyQueue:(id)a2;
- (id)sharedInstanceWithBundleIdentifier:(id)a0 replyQueue:(id)a1;

@end
