@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *_storage;
}

@property double value;
@property (getter=isIndeterminate) BOOL indeterminate;

- (double)maxValue;
- (void).cxx_destruct;
- (id)initForSubclass;
- (id)initWithMaxValue:(double)a0;

@end
