@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (void)createPermanent;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)createHelperConnection;
- (void)handlePermanentCreated;
- (void)moveCallsFromTempDatabase;
- (void)pokeSyncHelperToInitDB;
- (BOOL)validatePermDatabase;
- (BOOL)validateTempDatabase;
- (BOOL)willMoveCallsFromTempDatabase;

@end
