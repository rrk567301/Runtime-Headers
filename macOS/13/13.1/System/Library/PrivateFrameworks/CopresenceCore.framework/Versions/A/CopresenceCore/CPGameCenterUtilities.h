@class CPThreadSafeMutableSet;

@interface CPGameCenterUtilities : NSObject

@property (readonly, nonatomic) CPThreadSafeMutableSet *supportedBundleIDs;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsBundleID:(id)a0;
- (void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(id /* block */)a0;
- (void)fetchGameCenterMultiplayerGameStatusForBundleID:(id)a0 handler:(id /* block */)a1;

@end
