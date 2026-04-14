@class IMChipSuggestion;

@interface IMChipReply : NSObject <IMAttributableContent>

@property (nonatomic, readonly) IMChipSuggestion *suggestion;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;
- (id)suggestedReplyBody;

@end
