@class IMKCandidate;

@interface IMKUITriCandidateLayout : NSObject

@property (readonly) IMKCandidate *leftCandidate;
@property (readonly) IMKCandidate *middleCandiate;
@property (readonly) IMKCandidate *rightCandidate;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithleftCandidate:(id)a0 middleCandidate:(id)a1 rightCandidate:(id)a2;

@end
