@class NSString, LNValue;

@interface LNProperty : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) LNValue *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
