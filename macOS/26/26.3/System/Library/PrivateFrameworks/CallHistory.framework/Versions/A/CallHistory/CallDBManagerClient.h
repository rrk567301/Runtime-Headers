@class CHProcessHandle, NSXPCConnection;
@protocol CHDatabaseLocationProviderProtocol;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;
@property unsigned long long interruptionRetryCount;
@property (readonly, nonatomic) id /* block */ metaInfoProvider;
@property (readonly, nonatomic) CHProcessHandle *currentProcessHandle;
@property (readonly, nonatomic) id<CHDatabaseLocationProviderProtocol> databaseLocationProvider;

- (id)initWithProcessHandle:(id)a0;
- (id)initWithProcessHandle:(id)a0 metaInfoProvider:(id /* block */)a1 databaseLocationProvider:(id)a2;
- (void)pokeSyncHelperToInitDB;
- (id)init;
- (void)handleTemporaryCreated;
- (void)moveCallsFromTempDatabase;
- (BOOL)validateTempDatabase;
- (void)handlePermanentCreated;
- (void).cxx_destruct;
- (void)createHelperConnection;
- (BOOL)willMoveCallsFromTempDatabase;
- (BOOL)validatePermDatabase;
- (id)initWithProcessHandle:(id)a0 metaInfoProvider:(id /* block */)a1;
- (void)createTemporary;
- (void)createPermanent;
- (id)permDBLocation:(unsigned char *)a0;
- (id)tempDBLocation:(unsigned char *)a0;

@end
