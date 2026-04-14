@class FTTextToSpeechVoice, FTTextToSpeechResource;

@interface FTMutableTextToSpeechMeta : FTTextToSpeechMeta

@property (copy, nonatomic) FTTextToSpeechVoice *voice;
@property (copy, nonatomic) FTTextToSpeechResource *resource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
