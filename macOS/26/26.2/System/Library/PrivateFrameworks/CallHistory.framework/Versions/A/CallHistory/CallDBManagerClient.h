@class CHProcessHandle, NSXPCConnection;
@protocol CHDatabaseLocationProviderProtocol;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;
@property unsigned long long interruptionRetryCount;
@property (readonly, nonatomic) id /* block */ metaInfoProvider;
@property (readonly, nonatomic) CHProcessHandle *currentProcessHandle;
@property (readonly, nonatomic) id<CHDatabaseLocationProviderProtocol> databaseLocationProvider;

- (void)handleTemporaryCreated;
- (id)permDBLocation:(unsigned char *)a0;
- (void)createPermanent;
- (void)createTemporary;
- (id)tempDBLocation:(unsigned char *)a0;
- (id)initWithProcessHandle:(id)a0;
- (BOOL)validateTempDatabase;
- (void)moveCallsFromTempDatabase;
- (void)handlePermanentCreated;
- (void).cxx_destruct;
- (void)createHelperConnection;
- (BOOL)validatePermDatabase;
- (id)init;
- (BOOL)willMoveCallsFromTempDatabase;
- (void)pokeSyncHelperToInitDB;
- (id)initWithProcessHandle:(id)a0 metaInfoProvider:(id /* block */)a1 databaseLocationProvider:(id)a2;
- (id)initWithProcessHandle:(id)a0 metaInfoProvider:(id /* block */)a1;

@end
