@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) long long index;

- (long long)count;
- (void)reset;
- (char)isMutable;
- (void)appendWithProxyBlock:(id /* block */)a0;

@end
