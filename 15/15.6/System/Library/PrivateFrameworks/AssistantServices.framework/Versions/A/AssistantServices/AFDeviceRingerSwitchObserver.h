@class NSString, AFNotifyObserver, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyObserver *_notifyObserver;
    NSHashTable *_listeners;
    char _isActive;
}

@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_updateStateWithNotifyState:(unsigned long long)a0;

@end
