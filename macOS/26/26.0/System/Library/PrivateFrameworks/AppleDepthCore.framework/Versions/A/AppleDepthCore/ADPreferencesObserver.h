@class NSArray, ADPreferences;

@interface ADPreferencesObserver : NSObject {
    NSArray *_keys;
    id /* block */ _updateHandlerBlock;
    ADPreferences *_preferences;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initForPreferences:(id)a0 updateHandlerBlock:(id /* block */)a1 keys:(id)a2 invokeOnInit:(BOOL)a3;

@end
