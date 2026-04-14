@class NSMutableArray, NSArray, DEDBugSessionConfiguration, DEDBugSession, NSObject, CKContainer;
@protocol OS_os_log;

@interface DEDCloudKitClient : NSObject

@property (retain, nonatomic) DEDBugSession *bugSession;
@property (retain, nonatomic) DEDBugSessionConfiguration *bugSessionConfig;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) NSMutableArray *recordsQueue;
@property (retain, nonatomic) NSArray *previousRecordsQueue;

- (void).cxx_destruct;
- (void)flushQueue;
- (void)addRawRecordToQueueFromModel:(id)a0;
- (void)executeOperationsAtomicallyWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1 finalHandler:(id /* block */)a2;
- (void)executeRecord:(id)a0 atomicallyWithProgressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2 finalHandler:(id /* block */)a3;
- (id)initWithBugSession:(id)a0 configuration:(id)a1;
- (void)restoreQueue;
- (BOOL)stillHaveOperationsInQueue;

@end
