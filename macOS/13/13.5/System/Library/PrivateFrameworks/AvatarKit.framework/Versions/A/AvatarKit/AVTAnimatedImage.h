@class NSArray;

@interface AVTAnimatedImage : NSImage

@property (retain) NSArray *images;
@property double duration;
@property (readonly) double scale;

+ (id)animatedImageWithImages:(id)a0 duration:(double)a1;
+ (id)animatedImageWithAPNGRepresentation:(id)a0;
+ (id)animatedImageWithHEICRepresentation:(id)a0;
+ (id)animatedImageWithHEICSRepresentation:(id)a0;
+ (id)avt_animatedImageWithDataRepresentation:(id)a0 ofType:(struct __CFString { } *)a1;

- (void).cxx_destruct;
- (id)APNGRepresentation;
- (id)HEICSRepresentation;
- (id)HEICRepresentation;
- (id)avt_dataRepresentationForType:(struct __CFString { } *)a0;
- (id)copyByReorderingImagesWithFirstImageAtTime:(double)a0;
- (float)frameDelayInSeconds;

@end
