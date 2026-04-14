@class IMChipSuggestion;

@interface IMChipReply : NSObject <IMAttributableContent>

@property (nonatomic, readonly) IMChipSuggestion *suggestion;
@property (nonatomic, readonly) long long hash;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuggestion:(id)a0;
- (id)suggestedReplyBody;

@end
