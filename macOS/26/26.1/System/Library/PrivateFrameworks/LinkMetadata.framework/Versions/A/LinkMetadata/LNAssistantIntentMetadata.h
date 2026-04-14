@class NSString, NSArray, NSDictionary;

@interface LNAssistantIntentMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, copy, nonatomic) NSArray *phraseTemplates;
@property (readonly, copy, nonatomic) NSDictionary *parameterValues;
@property (readonly, copy, nonatomic) NSDictionary *impliedValues;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntentIdentifier:(id)a0 phraseTemplates:(id)a1 parameterValues:(id)a2 availabilityAnnotations:(id)a3;
- (id)initWithIntentIdentifier:(id)a0 phraseTemplates:(id)a1 parameterValues:(id)a2 impliedValues:(id)a3 availabilityAnnotations:(id)a4;

@end
