@class NSString, NSNumber, NSMutableArray;

@interface CellularStateRelay : NetworkAnalyticsStateRelay

@property char nrServingCellType;
@property char nrFrequencyBand;
@property (nonatomic) BOOL ratSelectionIsNR;
@property int cellMNC;
@property int cellMCC;
@property int cellUARFCN;
@property int cellPID;
@property int cellBandInfo;
@property (retain) NSString *cellType;
@property int cellBandwidth;
@property int cellTAC;
@property int cellRSRP;
@property double cellSNR;
@property (nonatomic) BOOL cellRrcConnected;
@property (retain) NSNumber *ratSelectionMask;
@property (retain) NSString *ratSelectionCurrent;
@property (retain) NSString *ratSelectionPreferred;
@property unsigned long long cellSPIType;
@property (readonly) NSMutableArray *networkSlicingStates;
@property (readonly) unsigned char cellDualSimStatus;
@property (readonly) int cellNonPreferredMNC;
@property (readonly) int cellNonPreferredMCC;

- (void).cxx_destruct;

@end
