@interface _TtC16HeadphoneManagerP33_339ABF723FCFCB74D55181D25E1261BF17AAOverrideBattery : AABattery {
    void /* unknown type, empty encoding */ _lvl;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _isLow;
}

@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) BOOL isLow;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithLevel:(double)a0 productID:(unsigned int)a1 state:(long long)a2 type:(long long)a3;

@end
