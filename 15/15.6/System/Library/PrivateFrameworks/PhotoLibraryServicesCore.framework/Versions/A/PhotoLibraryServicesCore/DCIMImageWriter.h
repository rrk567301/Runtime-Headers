@interface DCIMImageWriter : NSObject

+ (id)defaultFileExtensionForAssetType:(short)a0;
+ (id)incomingDirectoryPath;
+ (id)preferredFileExtensionForType:(id)a0;
+ (id)sharedDCIMWriter;
+ (void)writeableDataForImageData:(id)a0 imageUTIType:(id)a1 imageSource:(struct CGImageSource { } *)a2 thumbnailDataOut:(id *)a3 imageUTITypeOut:(id *)a4 primaryImagePropertiesOut:(id *)a5 imageDataOut:(id *)a6;
+ (id)incomingDirectoryPathForPhotoStream;
+ (short)savedAssetTypeForPhotoBoothAsset;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)a0 andExtension:(id)a1 isPhotoStream:(char)a2;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)a0;
+ (char)isLivePhotoFilteredVideoPath:(id)a0;
+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)a0;
+ (short)savedAssetTypeForCameraCapturedAsset;
+ (void)writeableDataForImage:(id)a0 previewImage:(id)a1 imageData:(id)a2 imageUTIType:(id)a3 imageSource:(struct CGImageSource { } *)a4 primaryImageProperties:(id)a5 imageOrientation:(long long)a6 thumbnailDataOut:(id *)a7 imageUTITypeOut:(id *)a8 primaryImagePropertiesOut:(id *)a9 isJPEGOut:(char *)a10 imageDataOut:(id *)a11;

- (char)writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3;
- (char)saveImageJobToDisk:(id)a0;
- (id)_cameraAssetExtensionForType:(short)a0;
- (char)_writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3 duringBurst:(char)a4;

@end
