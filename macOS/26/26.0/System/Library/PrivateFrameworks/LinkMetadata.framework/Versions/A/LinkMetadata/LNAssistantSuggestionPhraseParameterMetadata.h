@class NSString, NSNumber;

@interface LNAssistantSuggestionPhraseParameterMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) NSString *parameterValueToSet;
@property (readonly, nonatomic) NSNumber *hasToBeOnScreenParameter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterName:(id)a0 parameterValueToSet:(id)a1 hasToBeOnScreenParameter:(id)a2;

@end
