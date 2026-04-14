@class WFOnScreenContentNode;

@interface INGetOnScreenContentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) WFOnScreenContentNode *node;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0 error:(id)a1;

@end
