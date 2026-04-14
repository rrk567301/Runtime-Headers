@class NSString;

@interface SCRVoiceSelectionRotorItem : NSObject

@property (copy, nonatomic) NSString *voiceIdentifier;
@property (copy, nonatomic) NSString *shortVoiceName;
@property (copy, nonatomic) NSString *voiceLanguage;
@property (nonatomic) BOOL hasBeenSelected;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVoiceIdentifier:(id)a0 shortVoiceName:(id)a1 voiceLanguage:(id)a2 hasBeenSelected:(BOOL)a3;

@end
