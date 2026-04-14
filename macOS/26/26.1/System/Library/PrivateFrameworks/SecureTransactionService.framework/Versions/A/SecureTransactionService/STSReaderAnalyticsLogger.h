@class NSObject;
@protocol OS_dispatch_queue;

@interface STSReaderAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCALogger;

- (void).cxx_destruct;
- (id)init;
- (void)_postReaderSessionEvent:(id)a0;
- (void)_postReaderTransactionEvent:(id)a0 prepOnly:(BOOL)a1;
- (void)postReaderSessionEvent:(id)a0;
- (void)postReaderTransactionEvent:(id)a0 prepOnly:(BOOL)a1;

@end
