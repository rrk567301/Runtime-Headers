@class LNChoiceOption;

@interface LNChoiceResponse : LNResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNChoiceOption *selectedOption;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 selectedOption:(id)a1 context:(id)a2;

@end
