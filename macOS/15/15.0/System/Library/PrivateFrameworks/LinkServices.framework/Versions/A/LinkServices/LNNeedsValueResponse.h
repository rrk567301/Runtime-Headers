@class NSUUID, LNValue, NSDictionary;

@interface LNNeedsValueResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) NSDictionary *updates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (id)initWithIdentifier:(id)a0 value:(id)a1 updates:(id)a2;

@end
