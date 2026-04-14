@interface PodcastsFoundation._UserDefaultsObserver : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ notify;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)userDefaultsDidChange:(id)a0;

@end
