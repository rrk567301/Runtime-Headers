@class NSArray, NSMutableArray;

@interface MTRPluginDeviceControllerRegistry : NSObject

@property (retain) NSMutableArray *controllerEntities;
@property (readonly, retain) NSArray *controllers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addDeviceController:(id)a0;
- (BOOL)addDeviceController:(id)a0 forEntityWithIdentifier:(id)a1;
- (BOOL)removeDeviceController:(id)a0;
- (id)_deviceControllerEntityForIdentifier:(id)a0;
- (id)deviceControllerForUUID:(id)a0;

@end
