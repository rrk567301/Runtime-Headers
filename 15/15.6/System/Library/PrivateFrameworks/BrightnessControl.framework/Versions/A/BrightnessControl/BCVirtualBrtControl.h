@interface BCVirtualBrtControl : BCBrtControl {
    double _nits;
}

+ (void)failToCreateDisplaysFor:(double)a0;
+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;

- (id)init;
- (double)getNitsWithError:(id *)a0;
- (char)setNits:(double)a0 error:(id *)a1;

@end
