@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (id)_identifier;
- (long long)integerValue;
- (SEL)action;
- (void)setDoubleValue:(double)a0;
- (id)target;
- (void)setAction:(SEL)a0;
- (double)doubleValue;
- (void)setTag:(long long)a0;
- (void)setEnabled:(BOOL)a0;
- (int)intValue;
- (long long)tag;
- (id)_dictionaryRepresentation;
- (void)setIntegerValue:(long long)a0;
- (BOOL)isEnabled;
- (void)setFloatValue:(float)a0;
- (void)setTarget:(id)a0;
- (id)_initWithIdentifier:(id)a0;
- (float)floatValue;
- (id)init;
- (void)setIntValue:(int)a0;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end
