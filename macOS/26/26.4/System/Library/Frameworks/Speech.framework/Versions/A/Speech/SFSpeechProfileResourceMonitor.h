@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SFSpeechProfileResourceMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedMonitor;

- (id)_initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)_startSession;
- (void)_stopSession;
- (void)registerLaunchOnDemand;

@end
