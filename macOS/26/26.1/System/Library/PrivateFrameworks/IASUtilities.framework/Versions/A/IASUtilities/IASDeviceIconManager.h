@class NSMutableDictionary;

@interface IASDeviceIconManager : NSObject

@property (retain) NSMutableDictionary *iconCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)deviceIconForIdentifier:(id)a0;
- (id)deviceIconForIdentifier:(id)a0 color:(id)a1;
- (id)deviceIconForIdentifier:(id)a0 deviceColor:(id)a1 enclosureColor:(id)a2;
- (id)deviceTypeFromIdentifier:(id)a0;

@end
