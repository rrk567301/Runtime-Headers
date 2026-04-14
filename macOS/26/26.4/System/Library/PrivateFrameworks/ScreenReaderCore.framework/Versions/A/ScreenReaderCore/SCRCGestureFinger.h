@interface SCRCGestureFinger : NSObject {
    unsigned long long _identifier;
    struct CGPoint { double x; double y; } _location;
    double _pressure;
}

- (double)pressure;
- (struct CGPoint { double x0; double x1; })location;
- (long long)type;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2;

@end
