@class NSString, ISIconSegmentationFeedback;

@interface ISFallbackIconDarkSegmented : NSObject <ISDarkFallbackIcon>

@property (readonly, nonatomic) struct CGImage { } *darkImage;
@property (readonly, nonatomic) BOOL drawsLightingEffects;
@property (readonly, nonatomic) ISIconSegmentationFeedback *feedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDarkImage:(struct CGImage { } *)a0 drawsLightingEffects:(BOOL)a1 feedback:(id)a2;

@end
