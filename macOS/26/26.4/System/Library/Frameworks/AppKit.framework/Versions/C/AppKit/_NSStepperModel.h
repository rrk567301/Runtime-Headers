@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setStringValue:(id)a0;
- (id)stringValue;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (id)objectValue;
- (double)doubleValue;
- (long long)integerValue;
- (int)intValue;
- (float)floatValue;
- (BOOL)setFloatValue:(float)a0;
- (id)_rawContents;
- (BOOL)setIntValue:(int)a0;

@end
