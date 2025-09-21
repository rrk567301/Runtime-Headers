@class NSString, ISIconSegmentationFeedback;

@interface ISFallbackIconFill : NSObject <ISLightFallbackIcon, ISDarkFallbackIcon, ISTintedFallbackIcon>

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) struct CGImage { } *foregroundAndLightingEffectsImage;
@property (readonly, nonatomic) ISIconSegmentationFeedback *feedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImage:(struct CGImage { } *)a0 foregroundAndLightingEffectsImage:(struct CGImage { } *)a1 feedback:(id)a2;

@end
