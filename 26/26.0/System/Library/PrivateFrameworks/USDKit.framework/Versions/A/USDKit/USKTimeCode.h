@interface USKTimeCode : NSObject {
    struct SdfTimeCode { double _time; } _timeCode;
}

- (double)doubleValue;
- (id).cxx_construct;
- (unsigned long long)hash;
- (id)initWithDouble:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x0; })a0;
- (struct SdfTimeCode { double x0; })sdfTimeCode;

@end
