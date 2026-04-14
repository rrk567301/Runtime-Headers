@class NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

+ (id)defaultSourcesByType;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)fetchConfigurationMacOS;
- (void)fetchConfigurationOperationDidFinish:(id)a0;
- (void)fetchConfigurationiOS;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;

@end
