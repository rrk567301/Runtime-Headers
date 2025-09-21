@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    unsigned long long _totalSyncOperations;
    unsigned long long _failedSyncOperations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)clear;
- (float)backoffRatio;
- (void)newSyncOperationWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
