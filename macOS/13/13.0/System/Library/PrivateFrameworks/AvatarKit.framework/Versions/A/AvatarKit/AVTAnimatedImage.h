@class NSArray;

@interface AVTAnimatedImage : NSImage

@property (retain) NSArray *images;
@property double duration;
@property (readonly) double scale;

+ (id)animatedImageWithImages:(id)a0 duration:(double)a1;
+ (id)animatedImageWithHEICRepresentation:(id)a0;
+ (id)animatedImageWithHEICSRepresentation:(id)a0;
+ (id)animatedImageWithAPNGRepresentation:(id)a0;
+ (id)avt_animatedImageWithDataRepresentation:(id)a0 ofType:(struct __CFString { } *)a1;

- (void).cxx_destruct;
- (float)frameDelayInSeconds;
- (id)HEICRepresentation;
- (id)HEICSRepresentation;
- (id)APNGRepresentation;
- (id)avt_dataRepresentationForType:(struct __CFString { } *)a0;
- (id)copyByReorderingImagesWithFirstImageAtTime:(double)a0;

@end
