@class NSString, CAPresentationModifierGroup;

@interface CAPresentationModifier : NSObject {
    void *_impl;
    id _keyPath;
    id _value;
    id _velocity;
    CAPresentationModifierGroup *_group;
    unsigned long long _value_count;
    int _l;
    unsigned int _f;
}

@property (readonly, copy) NSString *keyPath;
@property (readonly) char additive;
@property (readonly) CAPresentationModifierGroup *group;
@property (retain) id value;
@property (getter=isEnabled) char enabled;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 additive:(char)a2;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 additive:(char)a2 group:(id)a3;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 initialVelocity:(id)a2 additive:(char)a3 preferredFrameRateRangeMaximum:(int)a4 group:(id)a5;
- (void)setValue:(id)a0 velocity:(id)a1;
- (void)write;

@end
