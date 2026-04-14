@class NSUUID, NSDictionary;

@interface LNConfirmationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) NSDictionary *updates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 confirmed:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 confirmed:(BOOL)a1 updates:(id)a2;

@end
