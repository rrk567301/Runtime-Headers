@class LNValue, NSDictionary;

@interface LNActionConfirmationResponse : LNResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) NSDictionary *updates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 context:(id)a1 updates:(id)a2;
- (id)initWithIdentifier:(id)a0 context:(id)a1 value:(id)a2 updates:(id)a3;

@end
