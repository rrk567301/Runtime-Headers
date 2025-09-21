@class MXCallStackTree, NSMeasurement;

@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *totalWritesCaused;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 totalWritesCaused:(id)a4 stackTrace:(id)a5;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 totalWritesCaused:(id)a2 stackTrace:(id)a3;

@end
