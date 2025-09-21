@interface iCloudSettings.ICSAnalyticsController : NSObject {
    void /* unknown type, empty encoding */ dataController;
}

- (id)initWithAccount:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sendBackupToggleEventWithActionType:(long long)a0;
- (void)sendDriveCellularToggleEventWithActionType:(long long)a0 enabled:(BOOL)a1;
- (void)sendDriveUnlimitedCellularToggleEventWithActionType:(long long)a0 enabled:(BOOL)a1;
- (void)sendToggleEventForDataclassID:(id)a0 actionType:(long long)a1 enabled:(BOOL)a2;

@end
