@class NSString, PXSharedLibraryStatusProvider;

@interface PXSharedLibrarySourceLibraryInfoMock : NSObject <PXSharedLibrarySourceLibraryInfo>

@property (readonly, nonatomic) char isSystemPhotoLibrary;
@property (readonly, nonatomic) char isCloudPhotoLibraryEnabled;
@property (readonly, nonatomic) char isCloudPhotoLibraryExiting;
@property (readonly, nonatomic) char isCloudPhotoLibraryInitialSyncCompleted;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pickerConfiguration;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })assetsCountsForAssetLocalIdentifiers:(id)a0;
- (id)createDataSourceManager;
- (void)createPreviewWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 autoSharePolicy:(long long)a2 startDate:(id)a3 personUUIDs:(id)a4 progress:(id)a5 presentationEnvironment:(id)a6 withCompletionHandler:(id /* block */)a7;
- (void)createSharedLibraryWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 autoSharePolicy:(long long)a2 startDate:(id)a3 personUUIDs:(id)a4 progress:(id)a5 presentationEnvironment:(id)a6 withCompletionHandler:(id /* block */)a7;
- (void)fetchEstimatedAssetsCountsForExit:(char)a0 imageCount:(unsigned long long *)a1 videoCount:(unsigned long long *)a2 audioCount:(unsigned long long *)a3 itemCount:(unsigned long long *)a4;
- (void)fetchEstimatedAssetsCountsForStartDate:(id)a0 personUUIDs:(id)a1 completion:(id /* block */)a2;
- (void)fetchEstimatedAssetsCountsShareEverythingPolicyWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedStartDateForPersonUUIDs:(id)a0 completion:(id /* block */)a1;
- (char)isFailedToURLFetchOwnedSharedLibraryError:(id)a0;
- (char)isSharedLibraryNotFoundError:(id)a0;
- (char)presentCustomInformationForError:(id)a0 customTitle:(id *)a1 customMessage:(id *)a2;
- (char)presentServerGeneratedMessageForError:(id)a0 customMessage:(id *)a1 learnMoreURL:(id *)a2;

@end
