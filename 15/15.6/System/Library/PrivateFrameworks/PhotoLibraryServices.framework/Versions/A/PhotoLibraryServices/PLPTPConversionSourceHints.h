@class UTType;

@interface PLPTPConversionSourceHints : NSObject {
    UTType *_livePhotoImageContentType;
}

@property (readonly) char isVideo;
@property (readonly) char isRender;
@property (readonly) char isLivePhoto;
@property (readonly) char livePhotoImageIsHEIC;

+ (id)hintsForAsset:(id)a0 isVideo:(char)a1 isRender:(char)a2;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 isVideo:(char)a1 isRender:(char)a2;

@end
