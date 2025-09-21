@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (long long)integerValue;
- (id)objectValue;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (float)floatValue;
- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setStringValue:(id)a0;
- (id)stringValue;
- (double)doubleValue;
- (BOOL)setFloatValue:(float)a0;
- (int)intValue;
- (id)_rawContents;
- (BOOL)setIntValue:(int)a0;

@end
