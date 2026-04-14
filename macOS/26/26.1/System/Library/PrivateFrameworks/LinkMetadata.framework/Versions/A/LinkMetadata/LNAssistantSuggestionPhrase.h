@class LNStaticDeferredLocalizedString, LNAssistantSuggestionPhraseMetadata;

@interface LNAssistantSuggestionPhrase : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *phrase;
@property (readonly, copy, nonatomic) LNAssistantSuggestionPhraseMetadata *phraseMetadata;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPhrase:(id)a0 phraseMetadata:(id)a1;

@end
