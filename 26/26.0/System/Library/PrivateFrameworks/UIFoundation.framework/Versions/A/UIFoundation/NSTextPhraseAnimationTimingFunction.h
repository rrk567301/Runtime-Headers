@class NSMutableArray;

@interface NSTextPhraseAnimationTimingFunction : NSObject {
    BOOL _populatedSamples;
    unsigned long long _indexCount;
}

@property (nonatomic) unsigned long long frequency;
@property (nonatomic) double duration;
@property (nonatomic) double initialValue;
@property (nonatomic) double finalValue;
@property (retain, nonatomic) NSMutableArray *sampledValues;
@property (copy, nonatomic) id /* block */ calcTimingFunction;

- (void).cxx_destruct;
- (id)initWithSamplingFrequency:(unsigned long long)a0 duration:(double)a1 initialValue:(double)a2 finalValue:(double)a3;
- (void)populateValues;

@end
