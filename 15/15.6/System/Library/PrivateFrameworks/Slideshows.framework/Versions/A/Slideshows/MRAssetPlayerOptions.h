@class MRImage;

@interface MRAssetPlayerOptions : NSObject {
    MRImage *_initialImage;
}

@property (readonly) char isEmbeddedAsset;
@property (readonly) char isStill;
@property (nonatomic) char wantsMonochromatic;
@property (nonatomic) char wantsMipmap;
@property (nonatomic) char wantsPowerOfTwo;
@property (nonatomic) char isForExport;
@property (nonatomic) char thumbnailIsOK;
@property (nonatomic) double stillTime;
@property (nonatomic) struct CGSize { double width; double height; } resolutionIfEmbeddedAsset;
@property (retain) MRImage *initialImage;
@property (nonatomic) id playerHint;
@property (nonatomic) double introDuration;
@property (nonatomic) double mainDuration;
@property (nonatomic) double outroDuration;

- (void)dealloc;
- (id)init;

@end
