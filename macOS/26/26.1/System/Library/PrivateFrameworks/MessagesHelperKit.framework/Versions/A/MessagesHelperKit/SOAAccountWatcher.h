@interface SOAAccountWatcher : NSObject

+ (id)sharedInstance;

- (void)_accountChanged:(id)a0;
- (void)dealloc;
- (id)init;

@end
