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

- (void)handleTemporaryCreated;
- (BOOL)notifyDataStoreChanged;
- (id)permDBLocation:(unsigned char *)a0;
- (id)initWithDeviceObserver:(id)a0;
- (void)createPermanent;
- (void)createTemporary;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)shouldCreatePermanent;
- (void)createDataStore;
- (void)moveCallsFromTempDatabase;
- (void)handlePermanentCreated;
- (id)createManagedObjectContext;
- (void).cxx_destruct;
- (BOOL)shouldCreateTemporary;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (id)init;

@end
