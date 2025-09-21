@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>

@property (class, nonatomic) char disableXPC;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedInstance;
+ (id)defaultConnectionVendor;
+ (id)defaultInterfaceVendor;

- (id)interfaceWithProtocol:(id)a0;
- (id)_init;
- (id)connectionForMachService:(id)a0;

@end
