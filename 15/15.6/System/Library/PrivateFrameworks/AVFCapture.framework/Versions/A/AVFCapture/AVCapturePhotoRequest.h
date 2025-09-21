@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCapturePhotoRequest : NSObject {
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
}

@property (readonly) unsigned int photoCallbackFlavor;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings;
@property (retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly, nonatomic) NSArray *expectedPhotoManifest;
@property (readonly, nonatomic) unsigned long long expectedPhotoCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount;
@property (readonly) char delegateSupportsDebugMetadataSidecarFile;
@property (readonly) char delegateSupportsMetadataIdentifiersCallback;
@property (readonly) char lensStabilizationSupported;
@property (retain, nonatomic) struct __IOSurface { } *previewSurface;
@property (retain, nonatomic) struct opaqueCMSampleBuffer { } *previewSampleBuffer;
@property (retain, nonatomic) struct __IOSurface { } *thumbnailSurface;

+ (void)initialize;
+ (id)requestWithDelegate:(id)a0 settings:(id)a1 lensStabilizationSupported:(char)a2;

- (void)dealloc;
- (void)_resolveExpectedPhotoManifest;
- (id)initWithDelegate:(id)a0 settings:(id)a1 lensStabilizationSupported:(char)a2;

@end
