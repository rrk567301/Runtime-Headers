@class NSDate, NSMutableDictionary, NSData, NSBitmapImageRep, NSMutableSet, SODataRetainingImage;

@interface BuddyPicture : NSObject <NSDiscardableContent> {
    struct CGSize { double width; double height; } _size;
    int _currentframe;
    int _frames;
    unsigned char _lookedForAnimatedRep : 1;
}

@property BOOL animating;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) SODataRetainingImage *image;
@property (retain, nonatomic) NSMutableDictionary *frameDelays;
@property (retain, nonatomic) NSBitmapImageRep *animatedRep;
@property (retain, nonatomic) NSMutableSet *cacheKeys;
@property (retain, nonatomic) NSDate *lastDrawn;
@property (nonatomic) double lastFrameChange;
@property (nonatomic) BOOL pictureIsIcon;

+ (id)myPicture;
+ (void)setMyPicture:(id)a0;
+ (id)buddyPictureWithData:(id)a0;
+ (id)buddyPictureWithImage:(id)a0;
+ (id)runLoopDrawingModes;

- (void)dealloc;
- (id)description;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (BOOL)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (BOOL)isContentDiscarded;
- (id)TIFFRepresentation;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithImage:(id)a0;
- (void)flushCaches;
- (int)frames;
- (BOOL)shouldAnimate;
- (id)_dataRepresentation;
- (id)currentFrame;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_animationPrefsChanged:(id)a0;
- (void)_registerForPreferenceChanges;
- (id)initWithData:(id)a0 key:(id)a1;
- (void)_updateAnimationState;
- (void)_cacheImage;
- (id)currentFrameWithMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)_noteLastFrameChange;
- (BOOL)_advancedNextFrame;
- (void)_noteLastDrawnTime;
- (void)_synchronizeFrame:(float)a0;
- (void)stepAnimation;
- (double)nextFrameDelayForFrame:(int)a0;
- (double)nextFrameDelay;
- (id)animatedRepresentation;
- (id)imageWithMaxSize:(struct CGSize { double x0; double x1; })a0 frame:(int)a1;
- (id)imageWithMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 operation:(unsigned long long)a1 fraction:(float)a2 firstFrameOnly:(BOOL)a3 scaled:(BOOL)a4;
- (id)dataWithMaxSize:(struct CGSize { double x0; double x1; })a0 minSize:(struct CGSize { double x0; double x1; })a1 maxDataSize:(float)a2 allowAnimated:(BOOL)a3;
- (id)animatedGIFDataWithSize:(struct CGSize { double x0; double x1; })a0 minSize:(struct CGSize { double x0; double x1; })a1 maxDataSize:(float)a2;

@end
