@class NSSet, NSMutableSet;

@interface UARPSupportedAccessoryManager : NSObject {
    NSMutableSet *_setOfAccessories;
}

@property (readonly) NSSet *setOfAccessories;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)addSupportedAccessories:(id)a0;
- (void)addSupportedAccessoryByDictionary:(id)a0;
- (void)addSupportedAccessory:(id)a0;

@end
