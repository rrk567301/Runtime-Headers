@class NSIndexSet, _PASLock;

@interface CCProvenanceStateSets : NSObject

@property (readonly, nonatomic) NSIndexSet *ineligibleSequences;
@property (readonly, nonatomic) NSIndexSet *eligibleSequences;
@property (readonly, nonatomic) _PASLock *compactedSequencesLock;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIneligibleSequences:(id)a0 eligibleSequences:(id)a1 compactedSequences:(id)a2;

@end
