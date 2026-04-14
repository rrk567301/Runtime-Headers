@class NSString;

@interface SIRINLURRAnnotation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
