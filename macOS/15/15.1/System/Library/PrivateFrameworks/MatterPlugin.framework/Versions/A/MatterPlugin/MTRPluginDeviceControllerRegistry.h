@class NSMutableArray;

@interface MTRPluginDeviceControllerRegistry : NSObject

@property (copy) NSMutableArray *controllers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addDeviceController:(id)a0;
- (BOOL)removeDeviceController:(id)a0;

@end
