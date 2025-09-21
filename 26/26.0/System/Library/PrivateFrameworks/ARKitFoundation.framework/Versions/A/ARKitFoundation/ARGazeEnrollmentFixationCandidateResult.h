@class ARGazeEnrollmentFixationCandidate, NSDictionary;

@interface ARGazeEnrollmentFixationCandidateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ARGazeEnrollmentFixationCandidate *fixationCandidate;
@property (readonly, nonatomic) BOOL isAccepted;
@property (readonly, nonatomic) unsigned long long failureReason;
@property (readonly, nonatomic) BOOL isFixationCandidateRetryRequested;
@property (readonly, nonatomic) BOOL isEnrollmentAbortAndRetryRequested;
@property (readonly, nonatomic) float estimatedCandidateResidualError;
@property (readonly, nonatomic) float estimatedOverallResidualError;
@property (readonly, nonatomic) NSDictionary *updatedScreenSpaceCorrectionData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFixationCandidate:(id)a0 isAccepted:(BOOL)a1 failureReason:(unsigned long long)a2 isFixationCandidateRetryRequested:(BOOL)a3 isEnrollmentAbortAndRetryRequested:(BOOL)a4 estimatedCandidateResidualError:(float)a5 estimatedOverallResidualError:(float)a6 updatedScreenSpaceCorrectionData:(id)a7;

@end
