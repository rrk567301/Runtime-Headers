@class NSDictionary;

@interface LNConfirmationResponse : LNResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isConfirmed) char confirmed;
@property (readonly, nonatomic) NSDictionary *updates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 context:(id)a1 confirmed:(char)a2 updates:(id)a3;

@end
