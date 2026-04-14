@class IMKCandidate;

@interface IMKUITriCandidateLayout : NSObject

@property (readonly) IMKCandidate *leftCandidate;
@property (readonly) IMKCandidate *middleCandiate;
@property (readonly) IMKCandidate *rightCandidate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithleftCandidate:(id)a0 middleCandidate:(id)a1 rightCandidate:(id)a2;

@end
