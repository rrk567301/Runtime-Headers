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

+ (id)modelURL;
+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;
+ (id)dataStoreName;

- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (id)createManagedObjectContext;
- (void)createPermanent;
- (BOOL)shouldCreateTemporary;
- (void)moveCallsFromTempDatabase;
- (BOOL)notifyDataStoreChanged;
- (id)init;
- (BOOL)shouldCreatePermanent;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (id)initWithDeviceObserver:(id)a0;
- (void)createTemporary;
- (void)createDataStore;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handleTemporaryCreated;
- (void).cxx_destruct;

@end
