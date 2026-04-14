@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (id)initWithLabel:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
