@interface SOAAccountWatcher : NSObject

+ (id)sharedInstance;

- (void)_accountChanged:(id)a0;
- (id)init;
- (void)dealloc;

@end
