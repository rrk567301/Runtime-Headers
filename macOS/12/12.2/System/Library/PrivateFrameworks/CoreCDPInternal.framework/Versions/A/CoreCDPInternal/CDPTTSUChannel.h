@class NSString, CUMessageSession;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy> {
    CUMessageSession *_sharingSession;
    BOOL _approverBackupRecordsExist;
    unsigned long long _approveriCloudKeychainState;
    BOOL _sentInitialResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)sendPayload:(id)a0 completion:(id /* block */)a1;
- (void)listenForPayloadsWithHandler:(id /* block */)a0;
- (void)setApproverBackupRecordsExist:(BOOL)a0;
- (void)setApproveriCloudKeychainState:(unsigned long long)a0;

@end
