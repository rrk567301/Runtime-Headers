@interface QCVirtualPort : QCPort {
    id _value;
    unsigned long long _lastFlagUpdateFrameID;
    void *_unused3[3];
}

+ (Class)baseClass;

- (void)dealloc;
- (id)value;
- (char)setValue:(id)a0;
- (Class)valueClass;
- (id)stateValue;
- (id)rawValue;
- (char)setStateValue:(id)a0;
- (char)acceptValuesOfClass:(Class)a0;
- (char)canConnectToPort:(id)a0;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setRawValue:(id)a0;
- (char)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipString;

@end
