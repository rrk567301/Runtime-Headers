@class COBallot;

@interface COElectionInfo : NSObject

@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) COBallot *ballot;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCommand:(id)a0;
- (id)leader;
- (BOOL)hasGreaterGenerationThan:(id)a0;
- (BOOL)hasSameGenerationAndLeader:(id)a0;
- (id)initWithGeneration:(unsigned long long)a0 ballot:(id)a1;

@end
