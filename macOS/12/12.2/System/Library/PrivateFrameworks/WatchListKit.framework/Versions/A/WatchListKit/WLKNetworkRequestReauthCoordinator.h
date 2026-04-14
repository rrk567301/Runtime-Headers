@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {
    NSLock *_lock;
}

@property BOOL sessionPrompt;

+ (id)coordinator;

- (void)dealloc;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)markPrompt;
- (BOOL)didPrompt;

@end
