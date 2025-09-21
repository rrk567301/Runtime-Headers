@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (void)setAction:(SEL)a0;
- (long long)integerValue;
- (SEL)action;
- (long long)tag;
- (void)setDoubleValue:(double)a0;
- (id)_identifier;
- (void)setTag:(long long)a0;
- (float)floatValue;
- (void)setIntegerValue:(long long)a0;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (id)target;
- (double)doubleValue;
- (void)setFloatValue:(float)a0;
- (id)_dictionaryRepresentation;
- (void)setTarget:(id)a0;
- (int)intValue;
- (id)_initWithIdentifier:(id)a0;
- (void)setIntValue:(int)a0;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end
