@class NSString, NSArray, NSDictionary;

@interface LNAssistantIntentMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, copy, nonatomic) NSArray *phraseTemplates;
@property (readonly, copy, nonatomic) NSDictionary *parameterValues;
@property (readonly, copy, nonatomic) NSDictionary *impliedValues;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntentIdentifier:(id)a0 phraseTemplates:(id)a1 parameterValues:(id)a2 availabilityAnnotations:(id)a3;
- (id)initWithIntentIdentifier:(id)a0 phraseTemplates:(id)a1 parameterValues:(id)a2 impliedValues:(id)a3 availabilityAnnotations:(id)a4;

@end
