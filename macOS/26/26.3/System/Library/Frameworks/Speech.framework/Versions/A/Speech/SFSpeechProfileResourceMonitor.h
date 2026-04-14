@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SFSpeechProfileResourceMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedMonitor;

- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_initWithQueue:(id)a0;
- (void)_startSession;
- (void)_stopSession;
- (void)registerLaunchOnDemand;

@end
