@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) id /* block */ block;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)_initialize;
- (id)_descriptionClassName;
- (id /* block */)batchBlock;
- (void)setBatchBlock:(id /* block */)a0;

@end
