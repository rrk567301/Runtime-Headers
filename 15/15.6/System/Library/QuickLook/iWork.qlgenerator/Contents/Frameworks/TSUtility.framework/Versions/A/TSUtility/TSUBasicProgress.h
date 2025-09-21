@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *_storage;
}

@property double value;
@property (getter=isIndeterminate) char indeterminate;

- (void).cxx_destruct;
- (double)maxValue;
- (id)initForSubclass;
- (id)initWithMaxValue:(double)a0;

@end
