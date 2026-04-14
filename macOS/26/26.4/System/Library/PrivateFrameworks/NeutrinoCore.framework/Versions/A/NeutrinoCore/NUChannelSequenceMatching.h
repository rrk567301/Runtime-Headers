@class NSArray;

@interface NUChannelSequenceMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *sequence;

- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithMatchingSequence:(id)a0;
- (id)subchannel:(id)a0;
- (id)subsequentMatching;

@end
