@interface _PASLPArrayContext : NSObject {
    const unsigned int *_storage;
    unsigned long long _count;
}

- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
