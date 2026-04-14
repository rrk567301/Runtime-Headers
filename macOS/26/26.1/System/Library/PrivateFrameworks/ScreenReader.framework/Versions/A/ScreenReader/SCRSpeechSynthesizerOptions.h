@class NSDictionary;

@interface SCRSpeechSynthesizerOptions : NSObject

@property (nonatomic) double pitchBase;
@property (nonatomic) double volume;
@property (nonatomic) double rate;
@property (retain, nonatomic) NSDictionary *phonemeSubstitutions;
@property (retain, nonatomic) NSDictionary *perVoiceSettings;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
