@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SFSpeechProfileResourceMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedMonitor;

- (void)removeObserver:(id)a0;
- (id)_initWithQueue:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_startSession;
- (void)_stopSession;
- (void)registerLaunchOnDemand;

@end
