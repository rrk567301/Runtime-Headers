@class IMChipSuggestion;

@interface IMChipReply : NSObject <IMAttributableContent>

@property (nonatomic, readonly) IMChipSuggestion *suggestion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithSuggestion:(id)a0;
- (id)suggestedReplyBody;

@end
