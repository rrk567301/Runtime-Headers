@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (void)setAction:(SEL)a0;
- (SEL)action;
- (id)_dictionaryRepresentation;
- (void)setIntegerValue:(long long)a0;
- (void)setTag:(long long)a0;
- (id)_identifier;
- (void)setDoubleValue:(double)a0;
- (void)setTarget:(id)a0;
- (double)doubleValue;
- (long long)integerValue;
- (int)intValue;
- (long long)tag;
- (void)setEnabled:(BOOL)a0;
- (float)floatValue;
- (BOOL)isEnabled;
- (id)_initWithIdentifier:(id)a0;
- (id)init;
- (id)target;
- (void)setFloatValue:(float)a0;
- (void)setIntValue:(int)a0;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end
