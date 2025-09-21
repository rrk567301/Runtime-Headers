@interface QTHUDDetentFunction : NSObject {
    double *_sortedDetents;
    unsigned long long _detentCount;
    double _detentMagnitude;
}

- (void)dealloc;
- (id)init;
- (id)detents;
- (double)detentMagnitude;
- (id)initWithDetents:(id)a0 detentMagnitude:(double)a1;
- (double)inputValueAtOutputValue:(double)a0;
- (double)outputValueAtInputValue:(double)a0;
- (double)outputValueAtInputValue:(double)a0 isInDetent:(char *)a1 indexOfDetent:(unsigned long long *)a2;

@end
