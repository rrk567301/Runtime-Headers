@interface BadgeStackLockup : NSStackView

@property (nonatomic) BOOL showDigitalExtra;
@property (nonatomic) BOOL showDigitalBooklet;
@property (nonatomic) BOOL show4k;
@property (nonatomic) BOOL showHDR;
@property (nonatomic) BOOL showHD;
@property (nonatomic) BOOL showVideo;
@property (nonatomic) BOOL showHDSDCombo;
@property (nonatomic) BOOL showVision;
@property (nonatomic) BOOL showDolbyAudio;
@property (nonatomic) BOOL showAtmos;
@property (nonatomic) BOOL showURLExtra;
@property (nonatomic) BOOL showClosedCaptioning;
@property (nonatomic) BOOL showDigitalMaster;
@property (nonatomic) BOOL showLossless;
@property (nonatomic) BOOL showHiResLossless;
@property (nonatomic) BOOL showSpatialAudio;

- (id)init:(BOOL)a0;
- (void)addBadgeWithResource:(id)a0 tooltip:(id)a1 boundTo:(SEL)a2;
- (void)clearAllBadges;

@end
