@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (long long)integerValue;
- (id)stringValue;
- (char)setStringValue:(id)a0;
- (char)setObjectValue:(id)a0;
- (id)objectValue;
- (char)setDoubleValue:(double)a0;
- (id)_rawContents;
- (char)setFloatValue:(float)a0;
- (char)setIntValue:(int)a0;
- (char)setIntegerValue:(long long)a0;

@end
