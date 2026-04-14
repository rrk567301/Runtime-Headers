@interface _NSPlaceholderData : NSData

- (id)retain;
- (id)initWithData:(id)a0;
- (unsigned long long)retainCount;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (id)init;

@end
