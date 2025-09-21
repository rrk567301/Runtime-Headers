@class NSNumber, LNValue, NSDictionary;

@interface LNDisambiguationResponse : LNResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *selectedIndex;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) NSDictionary *updates;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 context:(id)a1 selectedIndex:(id)a2 value:(id)a3 updates:(id)a4;

@end
