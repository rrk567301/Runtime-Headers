@class NSString, NSArray;

@interface LNAssistantIntentNegativePhrases : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, copy, nonatomic) NSArray *phrases;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntentIdentifier:(id)a0 phrases:(id)a1;

@end
