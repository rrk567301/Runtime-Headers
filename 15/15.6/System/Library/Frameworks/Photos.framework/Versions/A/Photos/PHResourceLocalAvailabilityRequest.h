@class NSArray, NSProgress, NSString, PHAsset, NSMutableArray, NSMutableDictionary;

@interface PHResourceLocalAvailabilityRequest : NSObject <NSProgressReporting> {
    NSMutableDictionary *_progressByRequestIdentifier;
    id /* block */ _downloadCompletionHandler;
}

@property (nonatomic, setter=_setProgressFraction:) double progressFraction;
@property (nonatomic, getter=_isDownloadCancelled, setter=_setDownloadCancelled:) char _downloadCancelled;
@property (retain, nonatomic, setter=_setAssetResources:) NSArray *_assetResources;
@property (readonly, nonatomic) NSMutableArray *_activeAssetResourcesRequest;
@property (readonly) PHAsset *asset;
@property (readonly) long long requestType;
@property (readonly) NSProgress *progress;
@property (copy, nonatomic) id /* block */ progressChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexesForAssetsRequiringResourceRetrieval:(id)a0 requestType:(long long)a1 options:(id)a2;
+ (id)_originalsAndFullSizeResourcesToShareForAsset:(id)a0 fromAvailableResources:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)_resourceInfoForAsset:(id)a0 resourcesToShare:(id)a1 assetVersion:(long long)a2 fulfillOnDemandResources:(char)a3 error:(id *)a4;
+ (id)_resourcesToShareForAsset:(id)a0 asUnmodifiedOriginal:(char)a1 error:(id *)a2;
+ (id)_resourcesToShareForAsset:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)_singularResourcesToShareForAsset:(id)a0 fromAvailableResources:(id)a1 options:(id)a2 useOriginalResources:(char)a3 knownUnsupported:(char)a4 error:(id *)a5;
+ (id)fetchResourcesToShareForAsset:(id)a0 requestOptions:(id)a1 error:(id *)a2;
+ (id)indexesForAssetsRequiringResourceRetrieval:(id)a0 requestType:(long long)a1;
+ (id)indexesForAssetsWithoutThumbnails:(id)a0 requestType:(long long)a1;
+ (char)isKnownUnsupportedFormatForAsset:(id)a0;
+ (id)resourceInfoForSharingAsset:(id)a0 asUnmodifiedOriginal:(char)a1 error:(id *)a2;
+ (id)resourceInfoKeysForResourceTypesForPhotos;
+ (id)resourceInfoKeysForResourceTypesForVideos;
+ (id)resourceLocalAvailabilityRequestLog;
+ (char)setValuesInDictionary:(id)a0 fromDictionary:(id)a1 keysToCopy:(id)a2;
+ (id)utiKeysForURLKeys;

- (id)init;
- (void).cxx_destruct;
- (void)_cancelActiveAssetResourceRequests;
- (void)_didFinishDownloadWithSuccess:(char)a0 resourceInfo:(id)a1 error:(id)a2;
- (void)_fetchResourcesForDuplicatingAsset:(id)a0 options:(id)a1 networkAccessAllowed:(char)a2 handler:(id /* block */)a3;
- (void)_fetchResourcesForPickerAsset:(id)a0 options:(id)a1 networkAccessAllowed:(char)a2 handler:(id /* block */)a3;
- (void)_fetchResourcesForSharingAsset:(id)a0 options:(id)a1 networkAccessAllowed:(char)a2 handler:(id /* block */)a3;
- (void)_fetchResourcesWithOptions:(id)a0 networkAccessAllowed:(char)a1 handler:(id /* block */)a2;
- (void)_handleCompletionOfAssetResourceDataRequestWithId:(int)a0 error:(id)a1;
- (void)_simulateFetchResourcesWithDuration:(double)a0 success:(char)a1 networkAccessAllowed:(char)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)_updateCombinedProgressWithValue:(double)a0 forRequestIdentifier:(id)a1 networkAccessAllowed:(char)a2;
- (void)cancelRetrievalRequest;
- (void)fetchResourceAvailabilityWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAsset:(id)a0 requestType:(long long)a1;
- (long long)resourceAvailabilityForOptions:(id)a0 resourceInfo:(id *)a1;
- (void)retrieveRequiredResourcesWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
