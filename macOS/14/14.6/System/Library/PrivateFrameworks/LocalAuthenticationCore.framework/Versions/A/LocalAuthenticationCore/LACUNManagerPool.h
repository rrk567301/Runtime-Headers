@class NSMutableDictionary;

@interface LACUNManagerPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedInstances;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)sharedInstanceWithBundleIdentifier:(id)a0 categoryIdentifier:(id)a1 replyQueue:(id)a2;
- (id)sharedInstanceWithBundleIdentifier:(id)a0 replyQueue:(id)a1;

@end
