@class LNChoiceOption;

@interface LNChoiceResponse : LNResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNChoiceOption *selectedOption;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 selectedOption:(id)a1 context:(id)a2;

@end
