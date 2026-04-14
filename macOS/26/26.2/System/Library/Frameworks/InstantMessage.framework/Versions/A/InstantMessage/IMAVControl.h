@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (float)floatValue;
- (void)setTarget:(id)a0;
- (int)intValue;
- (SEL)action;
- (void)setAction:(SEL)a0;
- (id)_identifier;
- (void)setIntegerValue:(long long)a0;
- (void)setTag:(long long)a0;
- (long long)integerValue;
- (void)setFloatValue:(float)a0;
- (id)_dictionaryRepresentation;
- (id)_initWithIdentifier:(id)a0;
- (id)target;
- (long long)tag;
- (void)setEnabled:(BOOL)a0;
- (void)setDoubleValue:(double)a0;
- (BOOL)isEnabled;
- (double)doubleValue;
- (id)init;
- (void)setIntValue:(int)a0;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end
