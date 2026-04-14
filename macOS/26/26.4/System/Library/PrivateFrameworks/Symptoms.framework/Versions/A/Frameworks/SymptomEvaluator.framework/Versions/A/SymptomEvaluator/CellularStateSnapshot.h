@class NSString;

@interface CellularStateSnapshot : NSObject

@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) BOOL knownGood;
@property (readonly, nonatomic) unsigned char radioTechnology;
@property (readonly, nonatomic) unsigned char signalBars;
@property (readonly, nonatomic) char nrFrequencyBand;
@property (readonly, nonatomic) BOOL ratSelectionIsNR;
@property (readonly, nonatomic) int cellMNC;
@property (readonly, nonatomic) int cellMCC;
@property (readonly, nonatomic) int cellUARFCN;
@property (readonly, nonatomic) int cellPID;
@property (readonly, nonatomic) int cellBandInfo;
@property (readonly, nonatomic) int cellRSRP;
@property (readonly, nonatomic) double cellSNR;
@property (readonly, nonatomic) NSString *cellType;
@property (readonly, nonatomic) int cellBandwidth;
@property (readonly, nonatomic) int cellTAC;
@property (readonly, nonatomic) BOOL cellRrcConnected;
@property (readonly, nonatomic) unsigned char cellDualSimStatus;
@property (readonly, nonatomic) int cellNonPreferredMNC;
@property (readonly, nonatomic) int cellNonPreferredMCC;
@property (readonly, nonatomic) BOOL isCellularSliceActive;
@property (readonly, nonatomic) BOOL isNonTerrestrialNetworkActive;
@property (readonly, nonatomic) BOOL isStewieActive;
@property (readonly, nonatomic) BOOL cellRoaming;

- (void).cxx_destruct;
- (id)initWithLinkQuality:(int)a0 knownGood:(BOOL)a1 radioTechnology:(unsigned char)a2 signalBars:(unsigned char)a3 nrFrequencyBand:(char)a4 ratSelectionIsNR:(BOOL)a5 cellMNC:(int)a6 cellMCC:(int)a7 cellUARFCN:(int)a8 cellPID:(int)a9 cellBandInfo:(int)a10 cellRSRP:(int)a11 cellSNR:(double)a12 cellType:(id)a13 cellBandwidth:(int)a14 cellTAC:(int)a15 cellRrcConnected:(BOOL)a16 cellDualSimStatus:(unsigned char)a17 cellNonPreferredMNC:(int)a18 cellNonPreferredMCC:(int)a19 cellularSliceActive:(BOOL)a20 isNonTerrestrialNetworkActive:(BOOL)a21 isStewieActive:(BOOL)a22 cellRoaming:(BOOL)a23;

@end
