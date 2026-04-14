@class NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol, CRKFeatureFlags;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

@property (readonly, nonatomic) id<CRKFeatureFlags> featureFlags;

+ (id)defaultSourcesByTypeWithStudentDaemonProxy:(id)a0;

- (void)run;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;
- (void)fetchConfiguration;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;

@end
