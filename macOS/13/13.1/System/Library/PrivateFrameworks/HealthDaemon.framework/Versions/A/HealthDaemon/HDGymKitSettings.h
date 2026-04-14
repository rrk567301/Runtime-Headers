@class NSString, HDProfile, NSObject, NRDevice;
@protocol OS_dispatch_queue, HDGymKitSettingsDelegate;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nfcPermission;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
    BOOL _hasRunProtectedDataCheck;
}

@property (readonly, nonatomic) unsigned long long nfcPermission;
@property (readonly, nonatomic) BOOL fitnessTrackingEnabled;
@property (weak, nonatomic) id<HDGymKitSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isLowPowerModeEnabled;
- (void)profileDidBecomeReady:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)unitTest_simulateNRDeviceUpdate;

@end
