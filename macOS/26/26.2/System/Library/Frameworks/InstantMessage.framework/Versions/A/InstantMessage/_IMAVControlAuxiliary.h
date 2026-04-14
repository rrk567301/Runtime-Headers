@interface _IMAVControlAuxiliary : NSObject

- (float)floatValue;
- (void)setTarget:(id)a0;
- (int)intValue;
- (SEL)action;
- (void)setAction:(SEL)a0;
- (void)setIntegerValue:(long long)a0;
- (id)identifier;
- (void)setTag:(long long)a0;
- (long long)integerValue;
- (void)setFloatValue:(float)a0;
- (void)setIdentifier:(id)a0;
- (id)target;
- (long long)tag;
- (void)setEnabled:(BOOL)a0;
- (void)setDoubleValue:(double)a0;
- (double)doubleValue;
- (id)dictionaryRepresentation;
- (BOOL)enabled;
- (void)setIntValue:(int)a0;
- (void)_performControlDidChange;
- (id)controlBar;
- (id)initWithControl:(id)a0;
- (void)setControlBar:(id)a0;

@end
