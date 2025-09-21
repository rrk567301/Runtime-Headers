@class NSString;

@interface SCRVoiceSelectionRotorItem : NSObject

@property (copy, nonatomic) NSString *voiceIdentifier;
@property (copy, nonatomic) NSString *shortVoiceName;
@property (copy, nonatomic) NSString *voiceLanguage;
@property (nonatomic) char hasBeenSelected;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVoiceIdentifier:(id)a0 shortVoiceName:(id)a1 voiceLanguage:(id)a2 hasBeenSelected:(char)a3;

@end
