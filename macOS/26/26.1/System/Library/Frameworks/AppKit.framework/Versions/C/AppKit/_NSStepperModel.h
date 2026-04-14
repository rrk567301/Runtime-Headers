@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (long long)integerValue;
- (id)objectValue;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (double)doubleValue;
- (int)intValue;
- (id)stringValue;
- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setFloatValue:(float)a0;
- (float)floatValue;
- (id)_rawContents;
- (BOOL)setIntValue:(int)a0;

@end
