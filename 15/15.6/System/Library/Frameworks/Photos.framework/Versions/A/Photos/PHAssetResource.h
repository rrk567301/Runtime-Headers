@class PLPhotoLibraryPathManagerIdentifier, PHAsset, NSString, NSURL, PHPhotoLibrary, NSDate, NSManagedObjectID;
@protocol PLResourceIdentity;

@interface PHAssetResource : NSObject <PHCPLAssetResource> {
    unsigned long long _fileSize;
    NSDate *_trashedDate;
    char _trashed;
    char _inCloud;
    PHPhotoLibrary *_photoLibrary;
    id /* block */ _privateFileLoader;
}

@property (readonly, nonatomic) NSURL *privateFileURL;
@property (readonly, copy, nonatomic) id /* block */ privateFileLoader;
@property (readonly, nonatomic) long long analysisType;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic, getter=isTrashed) char trashed;
@property (readonly, nonatomic, getter=isLocallyAvailable) char locallyAvailable;
@property (readonly, nonatomic, getter=isInCloud) char inCloud;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) id<PLResourceIdentity> backingResourceIdentity;
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned long long cplResourceType;
@property (nonatomic, getter=isLocallyAvailable) char locallyAvailable;
@property (retain, nonatomic) NSURL *privateFileURL;
@property (readonly, nonatomic, getter=isCurrent) char current;
@property (readonly, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) long long pixelWidth;
@property (readonly, nonatomic) long long pixelHeight;

+ (id)_assetResourcesFromPLResources:(id)a0 includeMetadata:(char)a1 mediaMetadataVirtualResources:(id)a2 asset:(id)a3 photoLibrary:(id)a4 assetHasAdjustments:(char)a5 includeDerivatives:(char)a6 includeAdjustmentOverflowDataBlob:(char)a7;
+ (id)_resourcesForManagedAsset:(id)a0 includeDerivatives:(char)a1;
+ (id)assetResourceForAsset:(id)a0 qualityClass:(id)a1;
+ (id)assetResourcesForAsset:(id)a0;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(char)a1;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(char)a1 includeMetadata:(char)a2;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(char)a1 includeMetadata:(char)a2 includeAdjustmentOverflowDataBlob:(char)a3;
+ (id)assetResourcesForAssets:(id)a0 includeDerivatives:(char)a1 includeMetadata:(char)a2 includeAdjustmentOverflowDataBlob:(char)a3;
+ (id)assetResourcesForLivePhoto:(id)a0;
+ (id)computeSyncMediaAnalysisPayloadDataForResourceURL:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResource:(id)a0 asset:(id)a1 hasAdjustments:(char)a2 photoLibrary:(id)a3;
- (id)initWithType:(long long)a0 livePhoto:(id)a1;

@end
