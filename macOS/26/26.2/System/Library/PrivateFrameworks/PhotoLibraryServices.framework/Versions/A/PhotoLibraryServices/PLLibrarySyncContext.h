@class NSString, PLPhotoLibrary, NSMutableDictionary, PLCloudRecordOrganizer;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {
    NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
}

@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (readonly, nonatomic) BOOL serverSupportsVision;
@property (readonly, nonatomic) BOOL serverSupportsGraphHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteFaces:(id)a0;
- (id)assetAdjustmentStateForCloudIdentifier:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)personForUUID:(id)a0;
- (id)makeFace;
- (BOOL)personUUIDIsDeleted:(id)a0;
- (void).cxx_destruct;
- (void)setAssetAdjustmentState:(id)a0 forCloudIdentifier:(id)a1;

@end
