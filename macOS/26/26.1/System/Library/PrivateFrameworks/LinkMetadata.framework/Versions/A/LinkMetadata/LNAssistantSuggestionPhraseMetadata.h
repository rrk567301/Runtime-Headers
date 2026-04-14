@class NSString, NSArray;

@interface LNAssistantSuggestionPhraseMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *templateKey;
@property (readonly, copy, nonatomic) NSArray *parametersMetadata;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithActionIdentifier:(id)a0 templateKey:(id)a1 parametersMetadata:(id)a2;

@end
