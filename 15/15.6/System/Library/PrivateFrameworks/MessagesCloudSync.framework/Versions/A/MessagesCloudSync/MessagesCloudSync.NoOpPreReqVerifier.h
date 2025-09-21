@class NSError;

@interface MessagesCloudSync.NoOpPreReqVerifier : _TtCs12_SwiftObject <MessagesCloudSync.SyncPreReqsVerifying>

- (void)verifyAllPreReqsWithRequireEnablement:(char)a0 completionHandler:(void (^)(NSError *))a1;

@end
