@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    unsigned long long _totalSyncOperations;
    unsigned long long _failedSyncOperations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (float)backoffRatio;
- (void)newSyncOperationWithError:(id)a0;
- (id)initWithCoder:(id)a0;

@end
