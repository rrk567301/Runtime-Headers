@class IMChipSuggestion;

@interface IMChipReply : NSObject <IMAttributableContent>

@property (nonatomic, readonly) IMChipSuggestion *suggestion;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSuggestion:(id)a0;
- (id)suggestedReplyBody;

@end
