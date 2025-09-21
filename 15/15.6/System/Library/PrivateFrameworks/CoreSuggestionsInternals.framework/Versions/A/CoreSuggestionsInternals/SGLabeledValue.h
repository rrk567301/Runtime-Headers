@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (char)isEqualToLabeledValue:(id)a0;

@end
