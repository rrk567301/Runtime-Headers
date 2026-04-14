@interface _IMAVControlAuxiliary : NSObject

- (float)floatValue;
- (double)doubleValue;
- (int)intValue;
- (long long)integerValue;
- (void)setEnabled:(BOOL)a0;
- (id)target;
- (void)setTarget:(id)a0;
- (BOOL)enabled;
- (id)identifier;
- (void)setTag:(long long)a0;
- (void)setAction:(SEL)a0;
- (void)setIdentifier:(id)a0;
- (SEL)action;
- (id)dictionaryRepresentation;
- (long long)tag;
- (void)setDoubleValue:(double)a0;
- (void)setIntValue:(int)a0;
- (void)setIntegerValue:(long long)a0;
- (void)setFloatValue:(float)a0;
- (id)initWithControl:(id)a0;
- (id)controlBar;
- (void)_performControlDidChange;
- (void)setControlBar:(id)a0;

@end
