@interface USKTimeCode : NSObject {
    struct SdfTimeCode { double _time; } _timeCode;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (double)doubleValue;
- (id)initWithDouble:(double)a0;
- (id).cxx_construct;
- (struct SdfTimeCode { double x0; })sdfTimeCode;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x0; })a0;

@end
