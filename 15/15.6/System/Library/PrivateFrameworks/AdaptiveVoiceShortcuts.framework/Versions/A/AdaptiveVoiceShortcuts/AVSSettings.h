@interface AVSSettings : NSObject

@property (class, nonatomic) char avsFeatureEnabled;
@property (class, nonatomic) char shouldHideAudioDonationPrompt;

- (id)init;

@end
