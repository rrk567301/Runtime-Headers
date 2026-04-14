@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) long long index;

- (long long)count;
- (void)reset;
- (BOOL)isMutable;
- (void)appendProxy:(id)a0;
- (void)appendWithProxyBlock:(id /* block */)a0;

@end
