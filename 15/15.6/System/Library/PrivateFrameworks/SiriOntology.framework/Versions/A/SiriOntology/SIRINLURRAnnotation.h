@class NSString;

@interface SIRINLURRAnnotation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
