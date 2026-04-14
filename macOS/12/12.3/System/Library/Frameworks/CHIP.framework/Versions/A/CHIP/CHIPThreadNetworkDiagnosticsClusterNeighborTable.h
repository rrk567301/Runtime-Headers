@class NSNumber;

@interface CHIPThreadNetworkDiagnosticsClusterNeighborTable : NSObject

@property (retain, nonatomic) NSNumber *extAddress;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *rloc16;
@property (retain, nonatomic) NSNumber *linkFrameCounter;
@property (retain, nonatomic) NSNumber *mleFrameCounter;
@property (retain, nonatomic) NSNumber *lqi;
@property (retain, nonatomic) NSNumber *averageRssi;
@property (retain, nonatomic) NSNumber *lastRssi;
@property (retain, nonatomic) NSNumber *frameErrorRate;
@property (retain, nonatomic) NSNumber *messageErrorRate;
@property (retain, nonatomic) NSNumber *rxOnWhenIdle;
@property (retain, nonatomic) NSNumber *fullThreadDevice;
@property (retain, nonatomic) NSNumber *fullNetworkData;
@property (retain, nonatomic) NSNumber *isChild;

- (id)init;
- (void).cxx_destruct;

@end
