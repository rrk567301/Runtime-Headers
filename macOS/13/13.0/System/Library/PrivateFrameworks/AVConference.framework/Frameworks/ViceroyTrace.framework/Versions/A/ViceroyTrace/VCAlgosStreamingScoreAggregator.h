@class NSMutableDictionary;

@interface VCAlgosStreamingScoreAggregator : NSObject {
    NSMutableDictionary *_participantAlgosScorers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _blockAlgosScorersDictionaryLock;
}

@property (readonly, nonatomic) double score;

- (void)dealloc;
- (id)init;
- (id)algosScorerWithParticipantID:(id)a0;
- (void)addParticipantWithTime:(double)a0 participantID:(id)a1;
- (double)aggregateScores;
- (double)aggregateScoresWithDictionaryLogging:(BOOL)a0 time:(double)a1;

@end
