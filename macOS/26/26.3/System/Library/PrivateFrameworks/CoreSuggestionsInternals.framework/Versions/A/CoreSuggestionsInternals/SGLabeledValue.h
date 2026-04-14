@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (BOOL)isEqualToLabeledValue:(id)a0;
- (id)description;
- (id)init;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
