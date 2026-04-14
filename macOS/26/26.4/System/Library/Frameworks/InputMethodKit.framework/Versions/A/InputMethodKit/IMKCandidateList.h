@class NSArray;

@interface IMKCandidateList : NSObject

@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) BOOL hasCandidate;

+ (id)candidateListWithCandidates:(id)a0;
+ (id)candidateListWithTextFrom:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCandidates:(id)a0;
- (id)initWithTextFrom:(id)a0;

@end
