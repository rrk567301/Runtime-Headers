@class NSNumber, NSArray;

@interface IECSInterface : NSObject

@property (readonly) NSNumber *rid;
@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int deviceService;
@property (nonatomic) unsigned int connection;
@property (retain, nonatomic) NSArray *locatedObjects;

+ (id)sharedInstance;
+ (id)locatedDevices;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;
- (id)initWithService:(unsigned int)a0 isHCPM:(BOOL)a1;
- (int)createUserClient;
- (void)destroyUserClient;
- (id)createFileNameForFirmware:(id *)a0;
- (int)iecsReadForAddress:(unsigned char)a0 buffer:(void *)a1 length:(unsigned long long)a2 flags:(unsigned int)a3 andOutReadLength:(unsigned long long *)a4;
- (int)iecsWriteForAddress:(unsigned char)a0 buffer:(void *)a1 length:(unsigned long long)a2 flags:(unsigned int)a3;
- (int)iecsWaitForIdle:(unsigned int)a0 pollInterval:(unsigned int)a1 timeout:(unsigned int)a2;
- (int)enableFirmwareUpdateMode:(BOOL)a0;
- (int)iecsCommand:(unsigned int)a0 flags:(unsigned int)a1 initialDelay:(unsigned int)a2 pollInterval:(unsigned int)a3 timeout:(unsigned int)a4;
- (int)iecsCheckIfBusy:(unsigned int)a0;
- (BOOL)forceRetimerDFUMode:(BOOL)a0;

@end
