@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress {
    OITSUBasicProgressStorage *mStorage;
}

@property double value;
@property (getter=isIndeterminate) BOOL indeterminate;

- (double)maxValue;
- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)a0;

@end
