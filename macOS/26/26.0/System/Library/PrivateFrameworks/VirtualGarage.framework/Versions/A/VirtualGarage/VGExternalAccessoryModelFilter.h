@class NSArray, NSString;

@interface VGExternalAccessoryModelFilter : NSObject <GEOResourceManifestTileGroupObserver>

@property (retain, nonatomic) NSArray *modelIdAllowlist;
@property (retain, nonatomic) NSArray *denylist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_initializeAllowAndDenylists;
- (id)init;
- (BOOL)allowsVehicleWithModelId:(id)a0 firmwareId:(id)a1 year:(id)a2 model:(id)a3;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (void).cxx_destruct;

@end
