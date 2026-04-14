@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <NSSecureCoding, NSCopying> {
    SSOperationProgress *_operationProgress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) long long phaseType;
@property (readonly) long long progressValue;
@property (readonly) long long totalProgressValue;
@property (readonly) long long progressUnits;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) float progressChangeRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperationProgress:(id)a0;

@end
