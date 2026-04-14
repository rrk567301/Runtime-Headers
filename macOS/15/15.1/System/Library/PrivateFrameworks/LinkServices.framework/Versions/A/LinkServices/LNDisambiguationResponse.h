@class NSUUID, LNValue, NSDictionary, NSNumber;

@interface LNDisambiguationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSNumber *selectedIndex;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) NSDictionary *updates;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 selectedIndex:(id)a1 value:(id)a2;
- (id)initWithIdentifier:(id)a0 selectedIndex:(id)a1 value:(id)a2 updates:(id)a3;

@end
