@class CHProcessHandle, NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain, nonatomic) CHProcessHandle *currentProcessHandle;
@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (id)initWithProcessHandle:(id)a0;
- (void)createPermanent;
- (void)moveCallsFromTempDatabase;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (BOOL)willMoveCallsFromTempDatabase;
- (BOOL)validatePermDatabase;
- (void)createTemporary;
- (BOOL)validateTempDatabase;
- (void)createHelperConnection;
- (id)permDBLocation:(unsigned char *)a0;
- (void).cxx_destruct;
- (void)pokeSyncHelperToInitDB;

@end
