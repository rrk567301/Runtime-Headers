@interface ICSTimeZoneChange : NSObject {
    double _interval;
    long long _tzOffsetTo;
}

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (double)interval;
- (id)description;
- (id)initWithTimeInterval:(double)a0 tzOffsetTo:(long long)a1;
- (BOOL)isCloseTo:(id)a0;
- (long long)tzOffsetTo;

@end
