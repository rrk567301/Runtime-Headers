@class NSHashTable, TUCallCenter, NSObject;
@protocol OS_dispatch_queue;

@interface SMEmergencyCallManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) TUCallCenter *callCenter;

- (void)_removeObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (void)setup;
- (void)_setup;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEmergencyCallOngoing;
- (void)_notifyObserversForEmergencyCallEnded;
- (void)_notifyObserversForEmergencyCallStarted;
- (void)_onTUCallCenterCallStatusChangedNotification:(id)a0;
- (void)fetchIsEmergencyCallOngoingWithHandler:(id /* block */)a0;
- (void)onTUCallCenterCallStatusChangedNotification:(id)a0;

@end
