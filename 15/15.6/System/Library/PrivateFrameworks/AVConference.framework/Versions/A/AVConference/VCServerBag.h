@interface VCServerBag : NSObject {
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } isLoadedCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } isLoadedMutex;
    char isLoaded;
    id observer;
}

+ (id)sharedInstance;
+ (void)checkKeysAgainstHardcodedPrefs:(id)a0;
+ (void)clearBagWithRefreshIntervalInSeconds:(int)a0;
+ (void)pullStoreBagKeys;
+ (void)retrieveBag;
+ (char)verifyRequiredKeys:(id *)a0;
+ (char)verifyRequiredKeys:(id)a0 withError:(id *)a1;
+ (char)verifyRequiredVoiceChatKeys:(id *)a0;

- (id)init;
- (void)waitForBagLoad;

@end
