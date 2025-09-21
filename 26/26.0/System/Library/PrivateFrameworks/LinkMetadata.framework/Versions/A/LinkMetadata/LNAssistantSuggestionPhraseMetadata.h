@class NSString, NSArray;

@interface LNAssistantSuggestionPhraseMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *templateKey;
@property (readonly, copy, nonatomic) NSArray *parametersMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 templateKey:(id)a1 parametersMetadata:(id)a2;

@end
