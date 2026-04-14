@interface _PASLPArrayContext : NSObject {
    const unsigned int *_storage;
    unsigned long long _count;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
