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

- (BOOL)notifyDataStoreChanged;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)createTemporary;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (void).cxx_destruct;
- (void)createPermanent;
- (BOOL)shouldCreatePermanent;
- (void)moveCallsFromTempDatabase;
- (id)init;
- (void)createDataStore;
- (BOOL)shouldCreateTemporary;
- (id)initWithDeviceObserver:(id)a0;
- (void)handleTemporaryCreated;
- (id)createManagedObjectContext;

@end
