@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)dealloc;
- (void)stop;
- (void)handlePreferencesOrProfileChanged;
- (void).cxx_destruct;
- (void)start:(id /* block */)a0;

@end
