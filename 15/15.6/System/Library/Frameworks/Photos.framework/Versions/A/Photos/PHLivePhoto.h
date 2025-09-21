@class PHImageManager, NSString, NSURL, NSArray, PHAsset, PHSandboxExtensionWrapper, NSObject, AVVideoComposition, NSNumber, AVAsset;

@interface PHLivePhoto : NSObject <NSItemProviderReading, NSCopying, NSSecureCoding> {
    PHAsset *_asset;
    NSObject *_plImage;
}

@property (class, readonly, copy) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) NSNumber *srlCompensationValue;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *imageTypeIdentifier;
@property (readonly, nonatomic) NSString *videoTypeIdentifier;
@property (readonly, copy, nonatomic) id /* block */ imageFileLoader;
@property (readonly, copy, nonatomic) id /* block */ videoFileLoader;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (nonatomic) float audioVolume;
@property (nonatomic) char skipInstantiatingImageAndAVAsset;
@property (readonly, nonatomic) char prefersHDR;
@property (weak, nonatomic) PHImageManager *imageManager;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (char)_canCreateLivePhotoWithURLs:(id)a0 videoComplementMetadata:(id)a1 outError:(id *)a2;
+ (char)_canCreateLoopingLivePhotoWithURLs:(id)a0 videoComplementMetadata:(id)a1 outError:(id *)a2;
+ (char)_identifyResourceURLs:(id)a0 outImageURL:(id *)a1 outVideoURL:(id *)a2 error:(id *)a3;
+ (id)_livePhotoWithResourceFileURLs:(id)a0 pairingIdentifier:(id)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 targetSize:(struct CGSize { double x0; double x1; })a4 contentMode:(long long)a5 skipValidation:(char)a6 isLooping:(char)a7 skipInstantiatingImageAndAVAsset:(char)a8 prefersHDR:(char)a9 error:(id *)a10;
+ (id)_livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipInstantiatingImageAndAVAsset:(char)a3 prefersHDR:(char)a4 error:(id *)a5;
+ (id)_livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipValidation:(char)a3 isLooping:(char)a4 skipInstantiatingImageAndAVAsset:(char)a5 prefersHDR:(char)a6 error:(id *)a7;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_photoTimeForLivePhotoWithImageURL:(id)a0 videoURL:(id)a1;
+ (char)_validateFileURLs:(id)a0 validationOptions:(unsigned long long)a1 videoComplementMetadata:(id)a2 outError:(id *)a3;
+ (void)cancelLivePhotoRequestWithRequestID:(int)a0;
+ (id)livePhotoWithResourceFileURLs:(id)a0 error:(id *)a1;
+ (id)livePhotoWithResourceFileURLs:(id)a0 pairingIdentifier:(id)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 error:(id *)a4;
+ (id)livePhotoWithResourceFileURLs:(id)a0 prefersHDR:(char)a1 error:(id *)a2;
+ (id)livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipInstantiatingImageAndAVAsset:(char)a3 error:(id *)a4;
+ (id)livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipValidation:(char)a3 prefersHDR:(char)a4 error:(id *)a5;
+ (id)loopingLivePhotoWithResourceFileURLs:(id)a0 skipInstantiatingImageAndAVAsset:(char)a1 error:(id *)a2;
+ (int)requestLivePhotoWithResourceFileURLs:(id)a0 placeholderImage:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 prefersHDR:(char)a4 resultHandler:(id /* block */)a5;
+ (int)requestLivePhotoWithResourceFileURLs:(id)a0 placeholderImage:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 resultHandler:(id /* block */)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)image;
- (id)_imageManager;
- (void)_loadConstituentURLsWithNetworkAccessAllowed:(char)a0 completionHandler:(id /* block */)a1;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4 options:(unsigned long long)a5;
- (id)initWithBundleAtURL:(id)a0 prefersHDR:(char)a1;
- (id)videoComplement;
- (void)_ensureConstituentData;
- (id)_initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4 assetUUID:(id)a5 options:(unsigned long long)a6 videoComposition:(id)a7;
- (id)_initWithImageURL:(id)a0 videoURL:(id)a1 videoComplementMetadata:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 contentMode:(long long)a4 prefersHDR:(char)a5;
- (id)_initWithImageURL:(id)a0 videoURL:(id)a1 videoComplementMetadata:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 contentMode:(long long)a4 skipInstantiatingImageAndAVAsset:(char)a5 prefersHDR:(char)a6;
- (char)_synchronouslyLoadImageURL:(id *)a0 videoURL:(id *)a1 error:(id *)a2;
- (char)hasPhotoColorAdjustments;
- (id)initWithBundleAtURL:(id)a0;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4 options:(unsigned long long)a5 videoComposition:(id)a6;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 assetUUID:(id)a4 options:(unsigned long long)a5 videoComposition:(id)a6;
- (void)saveToPhotoLibraryWithCompletionHandler:(id /* block */)a0;

@end
