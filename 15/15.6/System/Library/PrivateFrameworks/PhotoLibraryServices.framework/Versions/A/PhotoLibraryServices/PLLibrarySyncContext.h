@class NSString, PLPhotoLibrary, NSMutableDictionary, PLCloudRecordOrganizer;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {
    NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
}

@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (readonly, nonatomic) char serverSupportsVision;
@property (readonly, nonatomic) char serverSupportsGraphHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)deleteFaces:(id)a0;
- (id)assetAdjustmentStateForCloudIdentifier:(id)a0;
- (id)makeFace;
- (id)personForUUID:(id)a0;
- (char)personUUIDIsDeleted:(id)a0;
- (void)setAssetAdjustmentState:(id)a0 forCloudIdentifier:(id)a1;

@end
