@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePreferencesOrProfileChanged;
- (void)start:(id /* block */)a0;

@end
