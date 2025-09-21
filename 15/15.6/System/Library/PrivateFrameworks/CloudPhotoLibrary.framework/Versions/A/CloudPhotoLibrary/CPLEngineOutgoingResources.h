@class NSString, CPLPlatformObject;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfOriginalImages;
@property (readonly, nonatomic) unsigned long long countOfOriginalVideos;
@property (readonly, nonatomic) unsigned long long countOfOriginalOthers;
@property (readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
@property (readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)openWithError:(id *)a0;
- (unsigned long long)scopeType;
- (id)resourceTypesToUploadForChange:(id)a0;
- (unsigned long long)availableResourceSizeForUploadIdentifier:(id)a0;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)deleteResourcesToUploadWithUploadIdentifier:(id)a0 error:(id *)a1;
- (char)shouldUploadResource:(id)a0;
- (char)storeResourcesToUpload:(id)a0 withUploadIdentifier:(id)a1 shouldCheckResources:(char)a2 error:(id *)a3;

@end
