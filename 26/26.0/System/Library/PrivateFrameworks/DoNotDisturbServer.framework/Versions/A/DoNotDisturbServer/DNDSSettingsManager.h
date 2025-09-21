@class CNContactStore, NSString, NSObject, DNDSSyncSettingsProvider;
@protocol DNDSSettingsManagerDelegate, OS_dispatch_queue, DNDSBackingStore;

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> _backingStore;
    CNContactStore *_contactStore;
    DNDSSyncSettingsProvider *_syncSettingsProvider;
}

@property (weak, nonatomic) id<DNDSSettingsManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (id)sysdiagnoseDataIdentifier;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)behaviorSettingsWithError:(id *)a0;
- (void)setPairSyncEnabled:(BOOL)a0;
- (id)syncSettingsWithError:(id *)a0;
- (id)fallbackConfiguration;
- (void)dealloc;
- (BOOL)setScheduleSettings:(id)a0 withError:(id *)a1;
- (id)scheduleSettingsWithError:(id *)a0;
- (void)pairedDeviceDidChange;
- (unsigned long long)_writeSettingsRecord:(id)a0 error:(id *)a1;
- (void)syncSettingsProvider:(id)a0 didReceiveUpdatedSyncSettings:(id)a1;
- (id)phoneCallBypassSettingsWithError:(id *)a0;
- (unsigned long long)_saveBehaviorSettings:(id)a0 scheduleSettings:(id)a1 error:(id *)a2;
- (id)_readSettingsReturningError:(id *)a0;
- (id)initWithBackingStore:(id)a0 contactStore:(id)a1;
- (unsigned long long)_saveConfiguration:(id)a0 forModeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)setBehaviorSettings:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;

@end
