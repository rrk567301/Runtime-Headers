@class NSString, NSArray, NSObject, CKContainer;
@protocol OS_os_log;

@interface DEDCloudKitClient : NSObject <NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *taskIdentifier;
@property (retain) NSArray *pendingRecords;
@property (retain, nonatomic) CKContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)recordClasses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldRetryError:(id)a0;
- (id)createOperationWithRecords:(id)a0 task:(id)a1 perRecordProgressBlock:(id /* block */)a2 perRecordSaveBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)handleOtherFailure:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)handlePartialFailure:(id)a0 records:(id)a1 task:(id)a2 perRecordProgressBlock:(id /* block */)a3 perRecordSaveBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (id)initWithConfiguration:(id)a0 taskIdentifier:(id)a1;
- (BOOL)isBackgroundTaskExpiredError:(id)a0;
- (void)registerForTaskWithIdentifier:(id)a0 perRecordProgressBlock:(id /* block */)a1 perRecordSaveBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)resumeUploadWithPerRecordProgressBlock:(id /* block */)a0 perRecordSaveBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (double)retryDelayForError:(id)a0;
- (void)uploadRecords:(id)a0 task:(id)a1 perRecordProgressBlock:(id /* block */)a2 perRecordSaveBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)uploadRecords:(id)a0 totalUploadSize:(id)a1 perRecordProgressBlock:(id /* block */)a2 perRecordSaveBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;

@end
