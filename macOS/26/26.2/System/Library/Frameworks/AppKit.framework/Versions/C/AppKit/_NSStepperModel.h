@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (float)floatValue;
- (int)intValue;
- (id)objectValue;
- (BOOL)setIntegerValue:(long long)a0;
- (long long)integerValue;
- (BOOL)setFloatValue:(float)a0;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (double)doubleValue;
- (id)stringValue;
- (id)_rawContents;
- (BOOL)setIntValue:(int)a0;

@end
