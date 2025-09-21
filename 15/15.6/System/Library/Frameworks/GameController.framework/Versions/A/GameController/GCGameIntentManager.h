@class NSUserDefaults;

@interface GCGameIntentManager : NSObject {
    char _enabled;
    NSUserDefaults *_defaults;
    unsigned long long _currentCategory;
}

+ (id)instance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)launchToSpringboard;
- (void)toggleGamesFolder;
- (void)toggleGamesFolderAndDismissOnly:(char)a0;

@end
