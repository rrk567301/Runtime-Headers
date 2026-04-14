@class MXCallStackTree, NSMeasurement;

@interface MXHangDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *hangDuration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 hangDuration:(id)a3;

@end
