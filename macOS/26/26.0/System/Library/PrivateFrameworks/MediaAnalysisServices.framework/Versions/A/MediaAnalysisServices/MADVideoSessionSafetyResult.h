@class NSNumber, SCSensitivityAnalysis;

@interface MADVideoSessionSafetyResult : MADVideoSessionResult

@property (readonly, nonatomic) NSNumber *confidenceTypeN;
@property (readonly, nonatomic) SCSensitivityAnalysis *analysisResult;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSensitivityAttributes:(id)a0 requestID:(id)a1;

@end
