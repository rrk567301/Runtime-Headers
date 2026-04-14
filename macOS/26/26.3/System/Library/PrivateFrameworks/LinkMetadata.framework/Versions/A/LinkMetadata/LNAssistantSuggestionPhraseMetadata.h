@class NSString, NSArray;

@interface LNAssistantSuggestionPhraseMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *templateKey;
@property (readonly, copy, nonatomic) NSArray *parametersMetadata;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActionIdentifier:(id)a0 templateKey:(id)a1 parametersMetadata:(id)a2;

@end
