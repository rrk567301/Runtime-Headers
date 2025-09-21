@class NSUserDefaults, NSMutableSet;

@interface FigCaptureProprietaryDefaults : NSObject {
    NSUserDefaults *_videoUserDefaults;
    NSUserDefaults *_audioUserDefaults;
    id /* block */ _defaultsChangedHandler;
    NSMutableSet *_observedKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _changingDefaultsMyself;
}

+ (void)initialize;

- (id)initWithDefaultsChangedHandler:(id /* block */)a0;
- (void)stopObservingChangesForKey:(id)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)objectsForWildcardKey:(id)a0;
- (void)sendNotificationOfNewTransientValue:(id)a0 forKey:(id)a1;
- (id)setObject:(id)a0 forWildcardKey:(id)a1;
- (void)observeChangesForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
