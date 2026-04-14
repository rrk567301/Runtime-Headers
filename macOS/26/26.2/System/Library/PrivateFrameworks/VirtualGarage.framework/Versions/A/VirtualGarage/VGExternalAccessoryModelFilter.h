@class NSArray, NSString;

@interface VGExternalAccessoryModelFilter : NSObject <GEOResourceManifestTileGroupObserver>

@property (retain, nonatomic) NSArray *modelIdAllowlist;
@property (retain, nonatomic) NSArray *denylist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initializeAllowAndDenylists;
- (void).cxx_destruct;
- (BOOL)allowsVehicleWithModelId:(id)a0 firmwareId:(id)a1 year:(id)a2 model:(id)a3;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (id)init;
- (void)dealloc;

@end
