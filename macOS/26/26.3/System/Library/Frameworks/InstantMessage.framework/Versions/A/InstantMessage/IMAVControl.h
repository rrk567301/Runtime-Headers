@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (float)floatValue;
- (BOOL)isEnabled;
- (long long)tag;
- (void)setTag:(long long)a0;
- (id)_dictionaryRepresentation;
- (SEL)action;
- (int)intValue;
- (void)setIntegerValue:(long long)a0;
- (void)setAction:(SEL)a0;
- (id)_identifier;
- (void)setDoubleValue:(double)a0;
- (void)setFloatValue:(float)a0;
- (long long)integerValue;
- (double)doubleValue;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (id)_initWithIdentifier:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setIntValue:(int)a0;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end
