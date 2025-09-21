@interface PKInternalSettings : NSObject

@property (readonly, nonatomic) char showResetImageWandOnboardingInPalette;
@property (readonly, nonatomic) char forceShowImageWandOnboarding;
@property (readonly, nonatomic) char imageWandOnboardingDisabled;

+ (id)sharedInstance;

@end
