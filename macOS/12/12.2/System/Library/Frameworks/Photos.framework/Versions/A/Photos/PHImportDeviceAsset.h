@class NSArray, ICCameraFile;

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile *_cameraFile;
}

@property (readonly, nonatomic) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)a0 source:(id)a1;
+ (void)validateCameraFile:(id)a0;

- (void).cxx_destruct;
- (id)creationDate;
- (id)representedObject;
- (id)assetId;
- (BOOL)isLivePhoto;
- (id)burstUUID;
- (id)nameKey;
- (id)originatingAssetID;
- (void)loadMetadataSync;
- (BOOL)canDelete;
- (BOOL)canReference;
- (BOOL)isSloMo;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRAW;
- (id)parentFolderPath;
- (struct CGSize { double x0; double x1; })unorientedPixelSize;
- (id)durationTimeInterval;
- (BOOL)isViewable;
- (BOOL)isTagged;
- (BOOL)hasAudioAttachment;
- (BOOL)canPreserveFolderStructure;
- (BOOL)isRender;
- (BOOL)isSpatialOverCapture;
- (BOOL)isBase;
- (int)burstPickType;
- (id)livePhotoPairingIdentifier;
- (id)spatialOverCaptureIdentifier;
- (void)loadMetadataAsync:(id /* block */)a0;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3;
- (BOOL)containsDateKey:(id)a0;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (id)createMetadataFromProperties:(id)a0;

@end
