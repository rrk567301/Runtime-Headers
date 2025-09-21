@protocol NSStepperVisualProvider;

@interface _NSStepperStorage : _NSControlStorage {
    char _valueWraps;
    char _autorepeat;
    id<NSStepperVisualProvider> _visualProvider;
    double _increment;
}

- (void)dealloc;

@end
