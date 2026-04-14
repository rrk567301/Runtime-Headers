@interface USKTimeCode : NSObject {
    struct SdfTimeCode { double _time; } _timeCode;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDouble:(double)a0;
- (double)doubleValue;
- (id).cxx_construct;
- (struct SdfTimeCode { double x0; })sdfTimeCode;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x0; })a0;

@end
