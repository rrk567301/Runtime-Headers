@class NSString, HDProfile, HKObserverSet;
@protocol HDHealthRecordsProfileExtension, HDHealthRecordsAccountExistenceObserver;

@interface HDHealthRecordsAccountExistenceNotifier : NSObject <HDProfileReadyObserver, HDHealthRecordsAccountEventObserver> {
    id<HDHealthRecordsProfileExtension> _healthRecordsProfileExtension;
    HKObserverSet<HDHealthRecordsAccountExistenceObserver> *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _state;
    long long _testOverrideState;
    char _isProfileReady;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) long long ontologyEnablingHealthRecordsAccountState;
@property (readonly, nonatomic) char ontologyEnablingHealthRecordsAccountExists;
@property (copy, nonatomic) id /* block */ unitTesting_profileReadyCompleteHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)removeAccountExistenceObserver:(id)a0;
- (void)addAccountExistenceObserver:(id)a0;
- (void)addAccountExistenceObserver:(id)a0 queue:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)profileExtension:(id)a0 accountEventOccurred:(unsigned long long)a1;
- (void)unitTesting_setOntologyEnablingHealthRecordsAccountExists:(char)a0;

@end
