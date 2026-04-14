@class NSString, HMHomeManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKHMHomeManager : NSObject <HMHomeManagerDelegate> {
    HMHomeManager *_manager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_fetchCompletions;
    BOOL _didLoadData;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_fetchTimeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)fetchHomeIdentifierForPassSerialNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchHomesWithCompletion:(id /* block */)a0;
- (void)fetchLockAccessoryWithTerminalReaderIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)hasHomeAccessScheduleForPassSerialNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)isHomeAccessRestrictedForPassSerialNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)setLockStateToSecuredForLockAccessory:(id)a0 withCompletion:(id /* block */)a1;

@end
