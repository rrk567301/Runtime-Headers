@class CHProcessHandle, NSXPCConnection;
@protocol CHDatabaseLocationProviderProtocol;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;
@property unsigned long long interruptionRetryCount;
@property (readonly, nonatomic) id /* block */ metaInfoProvider;
@property (readonly, nonatomic) CHProcessHandle *currentProcessHandle;
@property (readonly, nonatomic) id<CHDatabaseLocationProviderProtocol> databaseLocationProvider;

- (BOOL)validatePermDatabase;
- (id)initWithProcessHandle:(id)a0;
- (void)pokeSyncHelperToInitDB;
- (void)createHelperConnection;
- (id)initWithProcessHandle:(id)a0 metaInfoProvider:(id /* block */)a1;
- (id)permDBLocation:(unsigned char *)a0;
- (id)initWithProcessHandle:(id)a0 metaInfoProvider:(id /* block */)a1 databaseLocationProvider:(id)a2;
- (void)handlePermanentCreated;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)createTemporary;
- (BOOL)validateTempDatabase;
- (void).cxx_destruct;
- (void)createPermanent;
- (BOOL)willMoveCallsFromTempDatabase;
- (void)moveCallsFromTempDatabase;
- (id)init;
- (void)handleTemporaryCreated;

@end
