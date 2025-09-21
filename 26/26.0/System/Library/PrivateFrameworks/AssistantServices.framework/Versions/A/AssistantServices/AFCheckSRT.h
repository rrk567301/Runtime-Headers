@class NSString;

@interface AFCheckSRT : NSObject {
    NSString *_pluginSelected;
    NSString *_currentTurnID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didReceivePluginSelected:(id)a0;
- (BOOL)trackEvent:(double)a0 forTurn:(id)a1;

@end
