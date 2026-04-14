@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (unsigned long long)hash;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
