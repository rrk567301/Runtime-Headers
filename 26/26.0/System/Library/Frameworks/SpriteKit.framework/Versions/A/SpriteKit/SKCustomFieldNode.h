@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) id /* block */ block;

+ (BOOL)supportsSecureCoding;

- (void)_initialize;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_descriptionClassName;
- (id /* block */)batchBlock;
- (void)setBatchBlock:(id /* block */)a0;

@end
