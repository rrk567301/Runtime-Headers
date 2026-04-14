@interface _NSControllerObjectProxy : NSObject {
    id _controller;
}

- (id)initWithController:(id)a0;
- (id)valueForKey:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)validateValue:(id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)mutableArrayValueForKey:(id)a0;
- (id)mutableArrayValueForKeyPath:(id)a0;
- (BOOL)validateValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (void)clearController;
- (void)_invokeSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (id)_proxyMutableArrayValueForKey:(id)a0;
- (id)_proxyMutableArrayValueForKeyPath:(id)a0;
- (long long)_requestTypeForOperationKey:(id)a0;
- (id)_valueWithOperatorKeyPath:(id)a0;

@end
