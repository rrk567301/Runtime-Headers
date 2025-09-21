@class NSString, NSDictionary, MRImage, MRSlideProvider;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {
    NSDictionary *mDescription;
    MRSlideProvider *mSlideProvider;
    MRImage *mOutputImage;
    NSDictionary *mFlattenedAttributes;
}

@property (retain, nonatomic) MRImage *inputImage;
@property (readonly) NSString *frameID;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;

+ (id)retainedFrameWithFrameID:(id)a0 forSlideProvider:(id)a1;

- (void)dealloc;
- (void)cleanup;
- (void)unload;
- (void)cancelLoading;
- (id)initWithFrameID:(id)a0;
- (char)isLoadedForTime:(double)a0;
- (char)isRetainedBySlideProvider;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(char)a3;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)releaseBySlideProvider:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)retainBySlideProvider:(id)a0;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
