@class NSString, NSArray;

@interface LNAssistantIntentNegativePhrases : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, copy, nonatomic) NSArray *phrases;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntentIdentifier:(id)a0 phrases:(id)a1;

@end
