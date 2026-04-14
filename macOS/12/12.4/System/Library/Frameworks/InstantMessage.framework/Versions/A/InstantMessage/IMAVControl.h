@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (id)init;
- (int)intValue;
- (float)floatValue;
- (double)doubleValue;
- (long long)integerValue;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (id)_identifier;
- (BOOL)isEnabled;
- (SEL)action;
- (void)setTag:(long long)a0;
- (void)setAction:(SEL)a0;
- (long long)tag;
- (void)setDoubleValue:(double)a0;
- (void)setIntValue:(int)a0;
- (void)setIntegerValue:(long long)a0;
- (void)setFloatValue:(float)a0;
- (id)_initWithIdentifier:(id)a0;
- (id)_dictionaryRepresentation;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end
