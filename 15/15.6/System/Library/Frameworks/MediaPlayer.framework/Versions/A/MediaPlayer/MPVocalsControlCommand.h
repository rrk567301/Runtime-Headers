@interface MPVocalsControlCommand : MPRemoteCommand

@property (nonatomic) char vocalsControlActive;
@property (nonatomic) float vocalsLevel;
@property (nonatomic) float minVocalsLevel;
@property (nonatomic) float maxVocalsLevel;
@property (nonatomic, getter=isContinuous) char continuous;

- (id)_mediaRemoteCommandInfoOptions;

@end
