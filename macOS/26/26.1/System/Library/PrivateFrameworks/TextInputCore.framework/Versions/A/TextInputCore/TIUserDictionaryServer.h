@class NSUUID, NSString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSArray *_cache;
    BOOL _updating;
    int _pendingUpdates;
    unsigned long long _keyboardActivityState;
    long long _recentClientCount;
}

@property (copy, nonatomic) NSUUID *userDictionaryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (id)singletonInstance;
+ (double)decrementClientDelay;

- (void)resetCache;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)incrementRecentClientCount;
- (void)handleIdleTimeout;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (void)decrementRecentClientCountAfterDelay;
- (void)managedKeyboardSettingsDidChange:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadPhraseShortcutPairs:(id /* block */)a0;
- (void)updateCache;
- (void)startServer;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)addObserver:(id /* block */)a0;

@end
