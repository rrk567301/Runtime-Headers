@class MLSequence;

@interface MLSequnceAsFeatureValueArray : NSArray

@property (readonly, nonatomic) MLSequence *sequence;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWrappingSequence:(id)a0;

@end
