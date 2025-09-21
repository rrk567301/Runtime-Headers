@interface SignpostSupportObjectFilter : NSObject

@property (readonly, copy, nonatomic) id /* block */ filterBlock;

- (void).cxx_destruct;
- (id)initWithFilterBlock:(id /* block */)a0;
- (char)passesObject:(id)a0;

@end
