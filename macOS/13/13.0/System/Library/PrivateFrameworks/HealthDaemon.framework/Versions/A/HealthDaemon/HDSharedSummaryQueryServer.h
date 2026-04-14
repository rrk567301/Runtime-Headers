@class HKSharedSummaryTransaction, NSString;

@interface HDSharedSummaryQueryServer : HDQueryServer {
    HKSharedSummaryTransaction *_transaction;
    NSString *_package;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;

@end
