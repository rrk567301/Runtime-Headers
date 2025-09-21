@class NSString, NSArray;

@interface LNAssistantIntentNegativePhrases : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, copy, nonatomic) NSArray *phrases;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntentIdentifier:(id)a0 phrases:(id)a1;

@end
