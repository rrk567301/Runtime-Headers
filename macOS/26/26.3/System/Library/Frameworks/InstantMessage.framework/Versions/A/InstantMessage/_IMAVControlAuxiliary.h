@interface _IMAVControlAuxiliary : NSObject

- (float)floatValue;
- (long long)tag;
- (void)setTag:(long long)a0;
- (SEL)action;
- (int)intValue;
- (void)setIntegerValue:(long long)a0;
- (void)setAction:(SEL)a0;
- (id)dictionaryRepresentation;
- (void)setDoubleValue:(double)a0;
- (id)identifier;
- (void)setFloatValue:(float)a0;
- (BOOL)enabled;
- (long long)integerValue;
- (double)doubleValue;
- (void)setEnabled:(BOOL)a0;
- (void)setIdentifier:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setIntValue:(int)a0;
- (void)_performControlDidChange;
- (id)controlBar;
- (id)initWithControl:(id)a0;
- (void)setControlBar:(id)a0;

@end
