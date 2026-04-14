@class IMChipSuggestion;

@interface IMChipReply : NSObject <IMAttributableContent>

@property (nonatomic, readonly) IMChipSuggestion *suggestion;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSuggestion:(id)a0;
- (id)suggestedReplyBody;

@end
