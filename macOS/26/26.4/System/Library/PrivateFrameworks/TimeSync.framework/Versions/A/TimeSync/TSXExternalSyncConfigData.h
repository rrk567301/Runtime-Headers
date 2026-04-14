@class NSString;

@interface TSXExternalSyncConfigData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int syncId;
@property (readonly, nonatomic) unsigned int triggerId;
@property (readonly, nonatomic) struct { unsigned long long numerator; unsigned long long denominator; } nominalTriggerDuration;
@property (readonly, nonatomic) struct { unsigned long long numerator; unsigned long long denominator; } syncMultiplier;
@property (readonly, nonatomic) unsigned long long toleranceExternalTriggerNs;
@property (readonly, nonatomic) unsigned long long toleranceSyncOutputNs;
@property (readonly, nonatomic) unsigned long long timeoutNs;
@property (readonly, copy, nonatomic) NSString *simulationFilePath;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigData:(struct { unsigned int x0; unsigned int x1; struct { unsigned long long x0; unsigned long long x1; } x2; struct { unsigned long long x0; unsigned long long x1; } x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; char *x7; })a0;

@end
