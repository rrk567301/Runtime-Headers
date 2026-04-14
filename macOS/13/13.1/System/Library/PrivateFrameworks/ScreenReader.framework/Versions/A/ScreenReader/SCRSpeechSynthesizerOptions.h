@interface SCRSpeechSynthesizerOptions : NSObject

@property (nonatomic) BOOL outputToURL;
@property (nonatomic) double pitchMod;
@property (nonatomic) double pitchDelta;
@property (nonatomic) BOOL desiredVoicePitchBaseDefined;
@property (nonatomic) double desiredVoicePitchBase;
@property (nonatomic) double volume;
@property (nonatomic) double customizedNormalVolume;
@property (nonatomic) double customizedMaxVolume;
@property (nonatomic) double customizedMinVolume;
@property (nonatomic) double customizedMinRate;
@property (nonatomic) double customizedMaxRate;
@property (nonatomic) double customizedNormalRate;
@property (nonatomic) double rate;

- (BOOL)isEqual:(id)a0;

@end
