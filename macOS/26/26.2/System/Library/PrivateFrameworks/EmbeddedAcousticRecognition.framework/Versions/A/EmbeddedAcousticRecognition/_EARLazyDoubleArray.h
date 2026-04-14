@interface _EARLazyDoubleArray : NSArray {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct { double *__cap_; } ; } _vec;
}

- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithDoubleVector:(const void *)a0;

@end
