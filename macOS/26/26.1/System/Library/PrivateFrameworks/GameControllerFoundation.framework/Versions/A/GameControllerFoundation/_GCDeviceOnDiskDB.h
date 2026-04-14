@class NSArray;

@interface _GCDeviceOnDiskDB : NSObject {
    NSArray *_bundles;
}

@property (readonly, copy) NSArray *configurationBundles;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundles:(id)a0;
- (id)bestModelMatchingDevice:(id)a0;

@end
