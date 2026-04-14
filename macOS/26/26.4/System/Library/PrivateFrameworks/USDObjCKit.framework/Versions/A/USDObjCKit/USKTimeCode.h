@interface USKTimeCode : NSObject {
    struct SdfTimeCode { double _time; } _timeCode;
}

- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithDouble:(double)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x0; })a0;
- (struct SdfTimeCode { double x0; })sdfTimeCode;

@end
