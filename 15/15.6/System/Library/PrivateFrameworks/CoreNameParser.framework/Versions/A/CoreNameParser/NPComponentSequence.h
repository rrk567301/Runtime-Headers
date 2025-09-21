@class NSArray;

@interface NPComponentSequence : NSObject

@property (copy) NSArray *observation;
@property (copy) NSArray *sequence;
@property (copy) NSArray *oovIndices;
@property double score;
@property double emissionModelScore;
@property double stateModelScore;
@property (getter=isFavorite) char favorite;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservationSequence:(id)a0 hiddenSequence:(id)a1 oovIndices:(id)a2 emissionModelScore:(double)a3 stateModelScore:(double)a4 boost:(double)a5;
- (char)isEqualToComponentSequence:(id)a0;
- (id)oovTokens;
- (void)setValue:(id)a0 atSequenceIndex:(unsigned long long)a1;

@end
