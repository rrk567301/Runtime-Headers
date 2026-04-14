@class CHDeviceObserver, DBManager, NSString;

@interface CallDBManager : NSObject <CHDeviceObserverDelegate>

@property unsigned char dataStoreType;
@property (retain, nonatomic) CHDeviceObserver *deviceObserver;
@property (retain, nonatomic) DBManager *dbManager;
@property unsigned char notifyDataStoreChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;
+ (id)modelURL;
+ (id)dataStoreName;

- (BOOL)shouldCreateTemporary;
- (void)createPermanent;
- (void)moveCallsFromTempDatabase;
- (void)handleTemporaryCreated;
- (void)createDataStore;
- (id)initWithDeviceObserver:(id)a0;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (void)createTemporary;
- (BOOL)notifyDataStoreChanged;
- (id)createManagedObjectContext;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)shouldCreatePermanent;
- (void).cxx_destruct;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (id)init;

@end
