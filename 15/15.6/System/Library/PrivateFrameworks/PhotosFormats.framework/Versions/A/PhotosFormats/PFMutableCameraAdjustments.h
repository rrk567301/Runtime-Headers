@class NSString, AVApplePortraitMetadata;

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (copy, nonatomic) NSString *effectFilterName;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (retain, nonatomic) AVApplePortraitMetadata *portraitMetadata;
@property (nonatomic, getter=isDepthEnabled) char depthEnabled;
@property (nonatomic) char isEligibleForCinematicAudioEffectProcessing;
@property (nonatomic) unsigned long long cinematicVideoRenderingVersion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic, getter=isSloMoEnabled) char sloMoEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDepthEnabled:(char)a0;
- (void)setPortraitEffectFilterName:(id)a0;
- (void)setEffectFilterName:(id)a0;
- (void)setPortraitMetadata:(id)a0;
- (void)setCinematicVideoRenderingVersion:(unsigned long long)a0;
- (void)setIsEligibleForCinematicAudioEffectProcessing:(char)a0;
- (void)setSloMoEnabled:(char)a0;

@end
