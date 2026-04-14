@interface _IMAVControlAuxiliary : NSObject

- (void)setAction:(SEL)a0;
- (SEL)action;
- (void)setIntegerValue:(long long)a0;
- (BOOL)enabled;
- (void)setTag:(long long)a0;
- (void)setIdentifier:(id)a0;
- (void)setDoubleValue:(double)a0;
- (void)setTarget:(id)a0;
- (double)doubleValue;
- (long long)integerValue;
- (int)intValue;
- (long long)tag;
- (void)setEnabled:(BOOL)a0;
- (float)floatValue;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)target;
- (void)setFloatValue:(float)a0;
- (void)setIntValue:(int)a0;
- (void)_performControlDidChange;
- (id)controlBar;
- (id)initWithControl:(id)a0;
- (void)setControlBar:(id)a0;

@end
