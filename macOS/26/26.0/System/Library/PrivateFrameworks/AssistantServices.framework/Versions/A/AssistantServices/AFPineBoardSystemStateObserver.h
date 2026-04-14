@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFPineBoardSystemStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_pineBoardStateGroup;
    long long _pineBoardStateGroupDepth;
    NSHashTable *_listeners;
}

@property (readonly, nonatomic) long long pineBoardSystemState;

+ (id)defaultObserver;

- (id)initWithQueue:(id)a0;
- (void)_startObservingPineBoardSystemState;
- (void)_endGroup;
- (void)_beginGroup;
- (void)removeListener:(id)a0;
- (void)_handlePineBoardStateChange:(long long)a0;
- (void)addListener:(id)a0;
- (void).cxx_destruct;

@end
