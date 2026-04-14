@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (int)intValue;
- (float)floatValue;
- (double)doubleValue;
- (id)stringValue;
- (long long)integerValue;
- (id)objectValue;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (BOOL)setIntValue:(int)a0;
- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setFloatValue:(float)a0;
- (id)_rawContents;

@end
