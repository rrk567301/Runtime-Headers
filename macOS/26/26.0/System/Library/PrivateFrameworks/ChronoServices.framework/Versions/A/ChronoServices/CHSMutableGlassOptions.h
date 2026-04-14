@class NSString;

@interface CHSMutableGlassOptions : CHSGlassOptions

@property (nonatomic) BOOL wantsSubduedGlass;
@property (nonatomic) BOOL wantsWhitePointBoost;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL wantsHighlightsDisplayAngle;

- (void)setWantsSubduedGlass:(BOOL)a0;
- (id)init;
- (void)setBackdropGroupName:(id)a0;
- (void)setWantsHighlightsDisplayAngle:(BOOL)a0;
- (void)setWantsWhitePointBoost:(BOOL)a0;

@end
