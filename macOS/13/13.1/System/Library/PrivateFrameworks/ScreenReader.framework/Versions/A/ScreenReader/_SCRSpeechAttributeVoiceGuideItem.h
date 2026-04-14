@class NSString, TTSSpeechVoice;

@interface _SCRSpeechAttributeVoiceGuideItem : SCRGuideItem

@property (readonly, copy, nonatomic) NSString *voiceID;
@property (readonly, copy, nonatomic) NSString *voiceDisplayName;
@property (retain, nonatomic) TTSSpeechVoice *voiceObject;

- (void).cxx_destruct;
- (id)initWithVoice:(id)a0 guide:(id)a1;
- (BOOL)matchesVoiceID:(id)a0;
- (void)addDisplayTitleToRequest:(id)a0;

@end
