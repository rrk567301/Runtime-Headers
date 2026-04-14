@class NSArray;

@interface NUChannelSequenceMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *sequence;

- (id)description;
- (id)init;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)initWithMatchingSequence:(id)a0;
- (id)subchannel:(id)a0;
- (id)subsequentMatching;

@end
