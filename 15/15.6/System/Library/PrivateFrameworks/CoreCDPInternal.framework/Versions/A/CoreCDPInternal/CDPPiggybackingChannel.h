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
- (id)_replyContextWithPakeData:(id)a0;
- (char)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)sendPayload:(id)a0 completion:(id /* block */)a1;

@end
