@interface _CNLazyArrayOperator : NSObject <_CNLazyArrayOperation>

@property (readonly) _CNLazyArrayOperator *input;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0;
- (id)nextObject;

@end
