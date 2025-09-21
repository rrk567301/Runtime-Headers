@interface SignpostSupportAnimationGraceTimeController : NSObject

@property (nonatomic) unsigned long long userInteractiveGraceTimeMs;
@property (nonatomic) unsigned long long userInitiatedGraceTimeMs;
@property (nonatomic) unsigned long long defaultGraceTimeMs;

- (unsigned long long)gracetimeMsForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)setAnimationType:(unsigned long long)a0 forSubsystem:(id)a1 category:(id)a2 name:(id)a3;
- (id)init;
- (void)setFirstFrameGraceTimeMs:(unsigned long long)a0 forSubsystem:(id)a1 category:(id)a2 name:(id)a3;

@end
