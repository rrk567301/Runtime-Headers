@class NSString, ACAPWordSuggestion;

@interface ACSHActionInsertText : ACSHAction

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) ACAPWordSuggestion *wordSuggestion;

+ (id)actionWithString:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)paramDescription;
- (void)performWithEventSourceData:(id)a0;

@end
