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
- (unsigned int)orientation;
- (id)fingerprint;
- (id)burstUUID;
- (BOOL)isLivePhoto;
- (BOOL)canReference;
- (BOOL)isSloMo;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadMetadataSync;
- (id)originatingAssetID;
- (id)nameKey;
- (BOOL)canPreserveFolderStructure;
- (id)parentFolderPath;
- (BOOL)canDelete;
- (BOOL)isRAW;
- (BOOL)hasAudioAttachment;
- (BOOL)isRender;
- (BOOL)isSpatialOverCapture;
- (BOOL)isBase;
- (BOOL)isTagged;
- (BOOL)isViewable;
- (struct CGSize { double x0; double x1; })exifPixelSize;
- (struct CGSize { double x0; double x1; })orientedPixelSize;
- (int)burstPickType;
- (id)livePhotoPairingIdentifier;
- (id)spatialOverCaptureIdentifier;
- (id)durationTimeInterval;
- (void)loadMetadataAsync:(id /* block */)a0;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3;
- (BOOL)containsDateKey:(id)a0;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (id)createMetadataFromProperties:(id)a0;

@end
