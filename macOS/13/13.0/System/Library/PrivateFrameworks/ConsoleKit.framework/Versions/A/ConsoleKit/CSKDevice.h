@class OSLogDevice, NSString, OSActivityStream, NSObject;
@protocol OS_dispatch_queue;

@interface CSKDevice : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trustConnectionSerialQueue;
@property (retain, nonatomic) OSActivityStream *_defaultStream;
@property (retain, nonatomic) OSLogDevice *_deviceRef;
@property (nonatomic) BOOL _isHostDevice;
@property (readonly, nonatomic) NSString *UDID;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL supportsLogsPersistenceReading;

+ (id)hostDevice;
+ (id)iconForDeviceType:(unsigned long long)a0;
+ (id)_hostMachineModel;
+ (id)_activityStreamForDevice:(id)a0;
+ (id)_persistenceStreamForDevice:(id)a0;
+ (unsigned long long)_deviceTypeForProductModel:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (id)initWithUDID:(id)a0 name:(id)a1;
- (id)typeIcon;
- (BOOL)establishTrustWithFailingHandler:(id /* block */)a0;

@end
