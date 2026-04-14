@class NSUUID;

@interface PHPerformChangesInstrumentation : NSObject {
    const char *_performChangesName;
    unsigned long long _signpostId;
    double _serviceWillValidateTimestamp;
    double _serviceDidValidateTimestamp;
    double _serviceWillExecuteTimestamp;
    double _serviceIsExecutingTimestamp;
    unsigned long long _transactionNumber;
    NSUUID *_uuid;
    long long _remainingRetryCount;
}

- (void).cxx_destruct;
- (id)init;

@end
