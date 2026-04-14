@interface QCVirtualPort : QCPort {
    id _value;
    unsigned long long _lastFlagUpdateFrameID;
    void *_unused3[3];
}

+ (Class)baseClass;

- (void)dealloc;
- (id)value;
- (BOOL)setValue:(id)a0;
- (Class)valueClass;
- (id)rawValue;
- (BOOL)setStateValue:(id)a0;
- (id)stateValue;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (id)tooltipString;
- (BOOL)canConnectToPort:(id)a0;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (void)setRawValue:(id)a0;

@end
