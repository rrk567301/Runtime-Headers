@class NSString;

@interface DGSmartOperation : DGOperation <DGSmartOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presetifyAdjustment:(id)a0;

- (void)resetOffsets;
- (void)resetAllAutoSettingsToPending;
- (double)getAutoValueForInputKey:(id)a0;
- (id)autoCalculatedSlaveInputKeysForMasterInputKey:(id)a0;
- (BOOL)_canApplyAutoSettings:(id)a0;

@end
