@class NSString, CUMessageSession, CDPContext;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy> {
    char _approverBackupRecordsExist;
    unsigned long long _approveriCloudKeychainState;
    char _sentInitialResponse;
    CDPContext *_cdpContext;
}

@property (retain, nonatomic) CUMessageSession *sharingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *telemetryFlowIDFromRequester;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setApproveriCloudKeychainState:(unsigned long long)a0;
- (char)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)listenForPayloadsWithHandler:(id /* block */)a0;
- (void)sendPayload:(id)a0 completion:(id /* block */)a1;
- (void)setApproverBackupRecordsExist:(char)a0;

@end
