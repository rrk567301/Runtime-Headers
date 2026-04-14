@class NSString, NSArray;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {
    NSString *_captureRequestIdentifier;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy) NSString *persistentStorageUUID;
@property (readonly) NSString *deferredPhotoIdentifier;
@property (readonly) NSArray *photoLibraryThumbnailDimensions;

- (id)captureRequestIdentifier;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithDeferredPhotoIdentifier:(id)a0 applicationIdentifier:(id)a1 photoLibraryThumbnailDimensions:(id)a2;
- (id)initWithDeferredPhotoIdentifier:(id)a0 applicationIdentifier:(id)a1;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 proxySurface:(struct __IOSurface { } *)a1 proxySurfaceSize:(unsigned long long)a2 proxyFileType:(id)a3 previewPhotoSurface:(struct __IOSurface { } *)a4 metadata:(id)a5 captureRequest:(id)a6 sequenceCount:(unsigned long long)a7 photoCount:(unsigned long long)a8 applicationIdentifier:(id)a9 captureRequestIdentifier:(id)a10 photoIdentifier:(id)a11 expectedPhotoProcessingFlags:(unsigned int)a12 sourceDeviceType:(id)a13;
- (void)dealloc;
- (id)initWithApplicationIdentifier:(id)a0 captureRequestIdentifier:(id)a1 photoIdentifier:(id)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 expectedPhotoProcessingFlags:(unsigned int)a4;
- (struct { int x0; int x1; })dimensions;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeferredPhotoIdentifier:(id)a0;

@end
