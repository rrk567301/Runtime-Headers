@class NSString, DADevice, NSObject;
@protocol OS_dispatch_queue;

@interface DAExtensionSessionConfiguration : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bluetoothRestorationID;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long capabilityFlags;
@property (readonly, nonatomic) DADevice *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long eventFlags;
@property (nonatomic) int pid;

- (id)initWithDevice:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBluetoothRestorationID:(id)a0;
- (BOOL)updateWithDAExtensionSessionConfiguration:(id)a0;

@end
