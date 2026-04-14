@class ISWrappedAVPlayer, NSNumber;

@interface ISPlayerOutputContent : NSObject

@property (readonly, nonatomic) struct CGImage { } *photo;
@property (readonly, nonatomic) BOOL photoIsOriginal;
@property (readonly, nonatomic) int photoEXIFOrientation;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (readonly, nonatomic) struct CGSize { double width; double height; } videoSize;
@property (readonly, nonatomic) NSNumber *aspectRatio;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPhoto:(struct CGImage { } *)a0 photoIsOriginal:(BOOL)a1 photoEXIFOrientation:(int)a2 videoPlayer:(id)a3 aspectRatio:(id)a4;

@end
