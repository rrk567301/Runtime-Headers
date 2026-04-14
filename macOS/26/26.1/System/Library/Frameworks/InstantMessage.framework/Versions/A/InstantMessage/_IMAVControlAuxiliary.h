@interface _IMAVControlAuxiliary : NSObject

- (long long)integerValue;
- (SEL)action;
- (void)setDoubleValue:(double)a0;
- (id)target;
- (void)setAction:(SEL)a0;
- (double)doubleValue;
- (void)setTag:(long long)a0;
- (void)setEnabled:(BOOL)a0;
- (id)dictionaryRepresentation;
- (BOOL)enabled;
- (int)intValue;
- (void)setIdentifier:(id)a0;
- (long long)tag;
- (void)setIntegerValue:(long long)a0;
- (id)identifier;
- (void)setFloatValue:(float)a0;
- (void)setTarget:(id)a0;
- (float)floatValue;
- (void)setIntValue:(int)a0;
- (void)_performControlDidChange;
- (id)controlBar;
- (id)initWithControl:(id)a0;
- (void)setControlBar:(id)a0;

@end
