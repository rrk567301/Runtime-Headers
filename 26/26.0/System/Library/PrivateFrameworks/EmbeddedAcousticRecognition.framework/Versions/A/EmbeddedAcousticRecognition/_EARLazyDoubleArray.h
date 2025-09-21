@interface _EARLazyDoubleArray : NSArray {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } _vec;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_initWithDoubleVector:(const void *)a0;

@end
