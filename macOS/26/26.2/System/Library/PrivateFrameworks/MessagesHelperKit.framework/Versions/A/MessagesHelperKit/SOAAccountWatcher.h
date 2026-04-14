@interface SOAAccountWatcher : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_accountChanged:(id)a0;
- (void)dealloc;

@end
