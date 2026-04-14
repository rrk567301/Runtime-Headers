@interface SRUIFCoercion : NSObject {
    id /* block */ _block;
}

+ (id)typeAssertionWithClass:(Class)a0;
+ (id)stringToUUIDCoercion;
+ (id)coercionWithBlock:(id /* block */)a0;
+ (id)identityCoercion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)coerceObject:(id)a0 error:(id *)a1;

@end
