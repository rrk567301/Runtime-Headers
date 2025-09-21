@interface _IMAVControlAuxiliary : NSObject

- (void)setAction:(SEL)a0;
- (long long)integerValue;
- (SEL)action;
- (long long)tag;
- (void)setDoubleValue:(double)a0;
- (void)setTag:(long long)a0;
- (float)floatValue;
- (void)setIntegerValue:(long long)a0;
- (id)identifier;
- (id)dictionaryRepresentation;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)target;
- (double)doubleValue;
- (void)setFloatValue:(float)a0;
- (void)setIdentifier:(id)a0;
- (void)setTarget:(id)a0;
- (int)intValue;
- (void)setIntValue:(int)a0;
- (void)_performControlDidChange;
- (id)controlBar;
- (id)initWithControl:(id)a0;
- (void)setControlBar:(id)a0;

@end
