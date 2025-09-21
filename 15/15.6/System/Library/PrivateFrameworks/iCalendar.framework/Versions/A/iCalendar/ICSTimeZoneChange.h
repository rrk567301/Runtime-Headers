@interface ICSTimeZoneChange : NSObject {
    double _interval;
    long long _tzOffsetTo;
}

- (id)description;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (double)interval;
- (id)initWithTimeInterval:(double)a0 tzOffsetTo:(long long)a1;
- (char)isCloseTo:(id)a0;
- (long long)tzOffsetTo;

@end
