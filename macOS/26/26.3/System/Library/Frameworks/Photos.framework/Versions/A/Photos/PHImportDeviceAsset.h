@class NSArray, ICCameraFile;

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile *_cameraFile;
}

@property (readonly, nonatomic) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)a0 source:(id)a1;
+ (void)validateCameraFile:(id)a0;

- (id)spatialOverCaptureIdentifier;
- (id)fingerprint;
- (id)livePhotoPairingIdentifier;
- (BOOL)isSloMo;
- (struct CGSize { double x0; double x1; })exifPixelSize;
- (id)durationTimeInterval;
- (BOOL)canDelete;
- (unsigned int)orientation;
- (BOOL)isSpatialOverCapture;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })orientedPixelSize;
- (id)creationDate;
- (id)representedObject;
- (id)securityScopedURL;
- (id)burstUUID;
- (BOOL)isLivePhoto;
- (id)nameKey;
- (int)burstPickType;
- (BOOL)canPreserveFolderStructure;
- (BOOL)canReference;
- (BOOL)containsDateKey:(id)a0;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)createMetadataFromProperties:(id)a0;
- (BOOL)hasAudioAttachment;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3;
- (BOOL)isBase;
- (BOOL)isDeviceAsset;
- (BOOL)isRAW;
- (BOOL)isRender;
- (BOOL)isTagged;
- (BOOL)isViewable;
- (void)loadMetadataAsync:(id /* block */)a0;
- (void)loadMetadataSync;
- (id)makeImportIdentifier;
- (id)originatingAssetID;
- (id)parentFolderPath;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;

@end
