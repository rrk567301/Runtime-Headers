@interface AVSSettings : NSObject

@property (class, nonatomic) BOOL avsFeatureEnabled;
@property (class, nonatomic) BOOL shouldHideAudioDonationPrompt;

+ (void)setVocalShortcutsEnabled:(BOOL)a0 source:(id)a1;

- (id)init;

@end
