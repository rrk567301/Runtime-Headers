@class NSDictionary, NSString, IRCandidate;

@interface IRCandidateInspectionGenerator : NSObject

@property (nonatomic) char sameSpaceBasedOnMiLo;
@property (nonatomic) char sameSpaceBasedOnBrokeredLOI;
@property (nonatomic) char sameSpaceBasedOnUWB;
@property (nonatomic) char sameSpaceBasedOnBLE;
@property (nonatomic) char sameSpaceBasedOnPDRFence;
@property (nonatomic) char sameSpaceBasedOnHistory;
@property (readonly, nonatomic) NSDictionary *candidateSelectorReasons;
@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) NSString *classificationDescription;

- (void).cxx_destruct;
- (id)exportCandidateInspectionAsDictionary;
- (id)initClassification:(long long)a0 andClassificationDescription:(id)a1 forCandidate:(id)a2;
- (id)initWithClassification:(long long)a0 ClassificationDescription:(id)a1 sameSpaceBasedOnMiLo:(char)a2 sameSpaceBasedOnBrokeredLOI:(char)a3 sameSpaceBasedOnPDRFence:(char)a4 sameSpaceBasedOnUWB:(char)a5 sameSpaceBasedOnBLE:(char)a6 sameSpaceBasedOnHistory:(char)a7 candidateSelectorReasons:(id)a8 forCandidate:(id)a9;

@end
