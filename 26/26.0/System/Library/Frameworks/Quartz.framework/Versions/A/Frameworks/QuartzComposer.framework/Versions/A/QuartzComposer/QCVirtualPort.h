@interface QCVirtualPort : QCPort {
    id _value;
    unsigned long long _lastFlagUpdateFrameID;
    void *_unused3[3];
}

+ (Class)baseClass;

- (BOOL)setValue:(id)a0;
- (id)stateValue;
- (id)value;
- (void)dealloc;
- (id)rawValue;
- (Class)valueClass;
- (BOOL)setStateValue:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (BOOL)canConnectToPort:(id)a0;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setRawValue:(id)a0;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipString;

@end
