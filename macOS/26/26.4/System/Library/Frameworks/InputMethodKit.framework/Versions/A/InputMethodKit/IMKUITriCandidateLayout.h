@class IMKCandidate;

@interface IMKUITriCandidateLayout : NSObject

@property (readonly) IMKCandidate *leftCandidate;
@property (readonly) IMKCandidate *middleCandiate;
@property (readonly) IMKCandidate *rightCandidate;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithleftCandidate:(id)a0 middleCandidate:(id)a1 rightCandidate:(id)a2;

@end
