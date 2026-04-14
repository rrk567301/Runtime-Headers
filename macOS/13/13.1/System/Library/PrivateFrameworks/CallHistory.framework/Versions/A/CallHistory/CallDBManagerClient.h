@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (void)handlePermanentCreated;
- (void)moveCallsFromTempDatabase;
- (BOOL)willMoveCallsFromTempDatabase;
- (void)createHelperConnection;
- (void)createPermanent;
- (void)createTemporary;
- (BOOL)validatePermDatabase;
- (BOOL)validateTempDatabase;
- (void)pokeSyncHelperToInitDB;
- (id)tempDBLocation:(unsigned char *)a0;
- (id)permDBLocation:(unsigned char *)a0;

@end
