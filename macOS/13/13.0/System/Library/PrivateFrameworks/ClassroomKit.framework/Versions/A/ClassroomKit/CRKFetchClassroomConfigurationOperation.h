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
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithStudentDaemonProxy:(id)a0;
- (void)fetchConfigurationOperationDidFinish:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;
- (void)fetchConfigurationiOS;
- (void)fetchConfigurationMacOS;

@end
