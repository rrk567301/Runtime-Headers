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

- (BOOL)shouldCreatePermanent;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (id)init;
- (BOOL)shouldCreateTemporary;
- (void)handleTemporaryCreated;
- (void)moveCallsFromTempDatabase;
- (void)handlePermanentCreated;
- (id)createManagedObjectContext;
- (void).cxx_destruct;
- (BOOL)notifyDataStoreChanged;
- (id)initWithDeviceObserver:(id)a0;
- (void)createDataStore;
- (void)createTemporary;
- (void)createPermanent;
- (id)permDBLocation:(unsigned char *)a0;
- (id)tempDBLocation:(unsigned char *)a0;

@end
