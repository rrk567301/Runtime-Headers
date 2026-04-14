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
+ (double)decrementClientDelay;
+ (void)setSharedInstance:(id)a0;
+ (id)singletonInstance;

- (void)handleIdleTimeout;
- (void)removeObserver:(id)a0;
- (void)updateCache;
- (void)decrementRecentClientCountAfterDelay;
- (id)addObserver:(id /* block */)a0;
- (void)keyboardActivityDidTransition:(id)a0;
- (void).cxx_destruct;
- (void)startServer;
- (void)incrementRecentClientCount;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (id)init;
- (void)resetCache;
- (void)managedKeyboardSettingsDidChange:(id)a0;
- (void)loadPhraseShortcutPairs:(id /* block */)a0;
- (void)dealloc;

@end
