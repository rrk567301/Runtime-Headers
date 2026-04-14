@class NSString;

@interface _SCRSpeechAttributeVoiceGuideItem : SCRGuideItem

@property (readonly, nonatomic) BOOL representsAutoSelectedVoice;
@property (readonly, copy, nonatomic) NSString *voiceID;
@property (readonly, copy, nonatomic) NSString *languageID;

- (void).cxx_destruct;
- (void)addDisplayTitleToRequest:(id)a0;
- (BOOL)matchesVoiceID:(id)a0 languageID:(id)a1;
- (id)initWithVoiceID:(id)a0 languageID:(id)a1 displayName:(id)a2 guide:(id)a3;

@end
