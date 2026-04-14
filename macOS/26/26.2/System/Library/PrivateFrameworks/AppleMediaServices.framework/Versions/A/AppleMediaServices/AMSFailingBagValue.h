@class NSError;

@interface AMSFailingBagValue : AMSFrozenBagValue

@property (retain) NSError *error;

- (id)initWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)valueWithCompletion:(id /* block */)a0;

@end
