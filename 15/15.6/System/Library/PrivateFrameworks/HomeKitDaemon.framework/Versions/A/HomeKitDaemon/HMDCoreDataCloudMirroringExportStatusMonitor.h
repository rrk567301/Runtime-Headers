@class NSString, HMDCoreData, NSMutableDictionary, NSManagedObjectContext;
@protocol HMDCoreDataCloudMirroringExportStatusMonitorDelegate;

@interface HMDCoreDataCloudMirroringExportStatusMonitor : HMFObject <HMDCoreDataNotificationListener, HMFLogging> {
    char _exportVerificationInProgress;
    char _additionalExportVerificationPending;
    HMDCoreData *_coreData;
    NSMutableDictionary *_objectIDToExportedToken;
}

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic, getter=isComplete) char complete;
@property (weak) id<HMDCoreDataCloudMirroringExportStatusMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithExpectedObjectIDToExportedToken:(id)a0;
- (void)coreData:(id)a0 persistentStoreWithIdentifierDidChange:(id)a1;
- (id)initWithCoreData:(id)a0 managedObjectContext:(id)a1;
- (void)verifyModelsExportStatus;

@end
