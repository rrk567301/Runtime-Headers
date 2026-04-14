@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (id)init;
- (double)doubleValue;
- (int)intValue;
- (float)floatValue;
- (long long)integerValue;
- (void)setEnabled:(BOOL)a0;
- (id)target;
- (void)setTarget:(id)a0;
- (id)_identifier;
- (void)setTag:(long long)a0;
- (void)setAction:(SEL)a0;
- (BOOL)isEnabled;
- (SEL)action;
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
