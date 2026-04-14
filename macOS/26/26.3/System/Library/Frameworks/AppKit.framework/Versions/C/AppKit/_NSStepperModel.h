@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (float)floatValue;
- (BOOL)setObjectValue:(id)a0;
- (int)intValue;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setDoubleValue:(double)a0;
- (BOOL)setFloatValue:(float)a0;
- (long long)integerValue;
- (double)doubleValue;
- (id)objectValue;
- (id)stringValue;
- (id)_rawContents;
- (BOOL)setIntValue:(int)a0;

@end
