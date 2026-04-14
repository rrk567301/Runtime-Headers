@interface _CNLazyArrayOperator : NSObject <_CNLazyArrayOperation>

@property (readonly) _CNLazyArrayOperator *input;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0;

@end
