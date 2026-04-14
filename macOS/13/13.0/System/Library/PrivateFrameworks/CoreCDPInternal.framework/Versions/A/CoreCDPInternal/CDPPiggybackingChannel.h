@class NSString, CDPContext;

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)sendPayload:(id)a0 completion:(id /* block */)a1;
- (BOOL)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (id)_replyContextWithPakeData:(id)a0;

@end
