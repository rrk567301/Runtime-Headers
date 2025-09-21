@class NSArray, NSString, EKEventStore, NSMutableDictionary;
@protocol EKDiagnosticsCollectionDelegate;

@interface EKDiagnosticsCollector : NSObject <EKCancellableRemoteOperation> {
    EKEventStore *_store;
    int _token;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_files;
    char _determinedOutputFiles;
    char _finished;
}

@property (nonatomic) char redactLogs;
@property (nonatomic) unsigned long long trafficLogsCollectionMode;
@property (readonly, weak, nonatomic) id<EKDiagnosticsCollectionDelegate> delegate;
@property (readonly, nonatomic) NSArray *files;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)disconnected;
- (void)cancelDiagnosticsCollection;
- (void)collectDiagnostics;
- (id)initWithEventStore:(id)a0 delegate:(id)a1;
- (void)receivedBatchResultsFromServer:(id)a0 finished:(char)a1;

@end
