@interface CNVariableChangeHelper : NSObject

@property (copy, nonatomic) id value;
@property (copy, nonatomic) id /* block */ test;

- (id)initWithValue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 test:(id /* block */)a1;
- (void)setValue:(id)a0 andPerformBlockIfChanged:(id /* block */)a1;

@end
