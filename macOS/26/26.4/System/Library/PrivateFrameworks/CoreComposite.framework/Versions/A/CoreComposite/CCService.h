@class NSMutableDictionary;

@interface CCService : NSObject

@property (retain, nonatomic) NSMutableDictionary *requiredLanes;
@property (retain, nonatomic) NSMutableDictionary *passes;
@property (retain, nonatomic) NSMutableDictionary *lanes;
@property (nonatomic) long long layerIndex;

- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)setDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initPrivate;
- (void)releaseBuffers;
- (void)addAllocations:(id)a0;
- (BOOL)preBuildService;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (id)laneKeys;
- (id)laneKeysWithEyeKeysStrippedOfEye;
- (id)laneKeysWithEyeKeysStrippedOfEyeForLaneType:(long long)a0;
- (id)laneKeysWithLaneDescriptorFilter:(id /* block */)a0 stripEyes:(BOOL)a1;
- (BOOL)reallocateBuffersWithDeviceGroup:(id)a0;
- (void)removeAllocations:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
