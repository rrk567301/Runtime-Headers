@class AWDServerConnection, NSObject;
@protocol OS_dispatch_queue;

@interface IDSHashPersistenceAWDLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}

+ (id)sharedInstance;

- (BOOL)shouldSubmit;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_submitAWDMetric:(id)a0 withContainer:(id)a1;
- (id)_metricContainerForMetricType:(unsigned int)a0;
- (void)duplicateMessageEncounted;

@end
