@class CHProcessHandle, NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain, nonatomic) CHProcessHandle *currentProcessHandle;
@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (id)initWithProcessHandle:(id)a0;
- (void)createHelperConnection;
- (void)createPermanent;
- (void)moveCallsFromTempDatabase;
- (void)createTemporary;
- (BOOL)willMoveCallsFromTempDatabase;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)validatePermDatabase;
- (void)pokeSyncHelperToInitDB;
- (void).cxx_destruct;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (BOOL)validateTempDatabase;

@end
