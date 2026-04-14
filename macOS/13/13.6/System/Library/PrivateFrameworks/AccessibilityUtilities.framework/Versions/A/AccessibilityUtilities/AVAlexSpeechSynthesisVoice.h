@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>

- (id)name;
- (id)identifier;
- (id)language;
- (long long)quality;
- (id)nameWithoutQuality;

@end
