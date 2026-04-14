@class NSNumber, SCSensitivityAnalysis;

@interface MADVideoSessionSafetyResult : MADVideoSessionResult

@property (readonly, nonatomic) NSNumber *confidenceTypeN;
@property (readonly, nonatomic) SCSensitivityAnalysis *analysisResult;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSensitivityAttributes:(id)a0 requestID:(id)a1;

@end
