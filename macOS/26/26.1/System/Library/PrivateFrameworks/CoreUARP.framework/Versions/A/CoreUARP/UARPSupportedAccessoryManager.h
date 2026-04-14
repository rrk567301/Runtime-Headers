@class NSSet, NSMutableSet, NSObject;
@protocol OS_os_log;

@interface UARPSupportedAccessoryManager : NSObject {
    NSMutableSet *_setOfAccessories;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSSet *setOfAccessories;

+ (id)defaultManager;

- (void)addSupportedAccessories:(id)a0;
- (void)addSupportedAccessory:(id)a0;
- (id)findByIdentifier:(id)a0;
- (void)addSupportedAccessoriesByURL:(id)a0;
- (void).cxx_destruct;
- (id)findByHardwareID:(id)a0;
- (void)addSupportedAccessoryByDictionary:(id)a0;
- (id)init;

@end
