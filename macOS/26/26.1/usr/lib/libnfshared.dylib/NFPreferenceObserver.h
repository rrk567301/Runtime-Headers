@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)start:(id /* block */)a0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)handlePreferencesOrProfileChanged;

@end
