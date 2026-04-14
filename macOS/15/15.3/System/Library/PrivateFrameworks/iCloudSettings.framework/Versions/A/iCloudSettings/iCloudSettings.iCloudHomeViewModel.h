@class NSString;

@interface iCloudSettings.iCloudHomeViewModel : NSObject <ICSCloudHomeViewDelegate> {
    void /* unknown type, empty encoding */ accountManager;
    void /* unknown type, empty encoding */ _dataModel;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ launchedFromRootLevel;
    void /* unknown type, empty encoding */ _privateRelaySubtitle;
    void /* unknown type, empty encoding */ hmeSubtitle;
    void /* unknown type, empty encoding */ _keychainDataclassSubtitle;
    void /* unknown type, empty encoding */ notesDataclassSubtitle;
    void /* unknown type, empty encoding */ _keychainDataclassEnabled;
    void /* unknown type, empty encoding */ _privateRelayAccess;
    void /* unknown type, empty encoding */ privateRelayViewModel;
    void /* unknown type, empty encoding */ _dynamicUIPresenterAdapter;
    void /* unknown type, empty encoding */ _purchaseController;
    void /* unknown type, empty encoding */ _showFamilySetupSheet;
    void /* unknown type, empty encoding */ _showLiftUISheet;
    void /* unknown type, empty encoding */ _liftUIURL;
    void /* unknown type, empty encoding */ shouldReportStatefulImpression;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberFormatter;
    void /* unknown type, empty encoding */ featureManagerObserver;
    void /* unknown type, empty encoding */ backupStatusDotColor;
    void /* unknown type, empty encoding */ backupDetailLabel;
    void /* unknown type, empty encoding */ backupSubtitle;
    void /* unknown type, empty encoding */ keychainSyncNotificationToken;
    void /* unknown type, empty encoding */ _accountDidChange;
    void /* unknown type, empty encoding */ loadingiCloudHomeSubview;
    void /* unknown type, empty encoding */ delayedDeeplinkURLString;
    void /* unknown type, empty encoding */ delayedAMSCIPURLString;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ analyticsController;
@property (nonatomic, readonly) NSString *photosDataclassSubtitle;
@property (nonatomic, readonly) NSString *driveDataclassSubtitle;
@property (nonatomic, readonly) NSString *mailDataclassSubtitle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didStartLoadingWithView:(long long)a0;
- (void)didStopLoadingWithView:(long long)a0;
- (id)expandedSubTitleForDataclass:(id)a0;
- (id)expandedSubTitleForService:(id)a0;

@end
