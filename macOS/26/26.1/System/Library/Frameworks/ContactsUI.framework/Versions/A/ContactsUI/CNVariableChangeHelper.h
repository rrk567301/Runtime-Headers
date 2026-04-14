@interface CNVariableChangeHelper : NSObject

@property (copy, nonatomic) id value;
@property (copy, nonatomic) id /* block */ test;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithValue:(id)a0 test:(id /* block */)a1;
- (void)setValue:(id)a0 andPerformBlockIfChanged:(id /* block */)a1;

@end
