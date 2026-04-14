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
- (void)loadMetadataSync;
- (id)nameKey;
- (id)originatingAssetID;
- (BOOL)canDelete;
- (BOOL)canReference;
- (BOOL)isSloMo;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRAW;
- (BOOL)isRender;
- (BOOL)isSpatialOverCapture;
- (BOOL)isBase;
- (id)parentFolderPath;
- (id)livePhotoPairingIdentifier;
- (struct CGSize { double x0; double x1; })unorientedPixelSize;
- (id)spatialOverCaptureIdentifier;
- (id)durationTimeInterval;
- (int)burstPickType;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;
- (BOOL)canPreserveFolderStructure;
- (BOOL)hasAudioAttachment;
- (BOOL)isTagged;
- (BOOL)isViewable;
- (void)loadMetadataAsync:(id /* block */)a0;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3;
- (BOOL)containsDateKey:(id)a0;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (id)createMetadataFromProperties:(id)a0;

@end
