@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)a0;
- (void)pokeSyncHelperToInitDB;
- (BOOL)willMoveCallsFromTempDatabase;
- (void)createHelperConnection;
- (BOOL)validatePermDatabase;
- (void)createPermanent;
- (void)createTemporary;
- (BOOL)validateTempDatabase;

@end
