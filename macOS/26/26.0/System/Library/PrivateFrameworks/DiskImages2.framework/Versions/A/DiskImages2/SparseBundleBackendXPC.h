@interface SparseBundleBackendXPC : BackendXPC

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSparseBundleWithURL:(id)a0;

- (BOOL)isUnlocked;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct expected<std::shared_ptr<Backend>, std::error_code> { struct __conditional_no_unique_address<true, std::__expected_base<std::shared_ptr<Backend>, std::error_code>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<std::shared_ptr<Backend>, std::error_code>::__union_t> { union __union_t { struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } x0; struct error_code { int x0; struct error_category *x1; } x1; } x0; } x0; BOOL x1; } x0; } x0; })getCryptoHeaderBackend;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1 bandSize:(unsigned long long)a2;
- (id)newWithCryptoFormat:(const void *)a0 error:(id *)a1;
- (void)replaceWithBackendXPC:(id)a0;

@end
