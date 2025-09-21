@class NSString;

@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject <VCRedundancyControlAlgorithm> {
    unsigned int _packetLossPercentage;
    unsigned int _burstyLoss[500];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
}

@property (readonly, nonatomic) unsigned int redundancyPercentage;
@property (readonly, nonatomic) double redundancyInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (unsigned int)computeRedundancyWithBurstyLoss;
- (unsigned int)computeRedundancyWithLossPercentage;
- (void)updateBurstyLoss:(unsigned int)a0;
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage { int x0; int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; double x11; char x12[64]; int x13; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; double x14; unsigned int x15; unsigned int x16; double x17; unsigned int x18; BOOL x19; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double x5; double x6; double x7; unsigned int x8; unsigned int x9; } x20; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x21; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x22; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x23; BOOL x24; BOOL x25; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double x5; double x6; double x7; unsigned int x8; unsigned int x9; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; double x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double x5; double x6; double x7; unsigned int x8; unsigned int x9; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x9; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; int x11; unsigned int x12; unsigned short x13; union { struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; float x11; BOOL x12; unsigned short x13; unsigned int x14[6]; unsigned char x15; long long x16; unsigned short x17; float x18; float x19; float x20; float x21; float x22; } x0; struct { unsigned char x0; short x1; short x2; char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short x9; unsigned char x10; } x1; } x14; } x10; struct tagVCStatisticsVideoLossFeedback { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x11; struct tagVCStatisticsLocalRCEvent { double x0; double x1; unsigned int x2; } x12; } x7; })a0;

@end
