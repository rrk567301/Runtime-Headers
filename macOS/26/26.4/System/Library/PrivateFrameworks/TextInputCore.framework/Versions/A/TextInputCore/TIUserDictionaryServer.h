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
+ (id)singletonInstance;
+ (double)decrementClientDelay;
+ (void)setSharedInstance:(id)a0;

- (void)resetCache;
- (void)managedKeyboardSettingsDidChange:(id)a0;
- (void)decrementRecentClientCountAfterDelay;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (void)startServer;
- (void)keyboardActivityDidTransition:(id)a0;
- (void).cxx_destruct;
- (id)addObserver:(id /* block */)a0;
- (void)updateCache;
- (id)init;
- (void)handleIdleTimeout;
- (void)incrementRecentClientCount;
- (void)removeObserver:(id)a0;
- (void)loadPhraseShortcutPairs:(id /* block */)a0;
- (void)dealloc;

@end
