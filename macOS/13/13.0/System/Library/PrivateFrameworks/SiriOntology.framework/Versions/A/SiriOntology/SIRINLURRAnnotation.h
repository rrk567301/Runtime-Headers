@class NSString;

@interface SIRINLURRAnnotation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
