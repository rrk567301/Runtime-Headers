@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {
    NSArray *_portTypes;
    NSDictionary *_portTypeToFrameStatistics;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; float x14; float x15; double x16; unsigned int x17; unsigned int x18; unsigned int x19; BOOL x20; BOOL x21; BOOL x22; int x23; BOOL x24; float x25; int x26; BOOL x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; float x37; int x38; float x39; int x40; int x41; id x42; long long x43; id x44; unsigned int x45; float x46; int x47; BOOL x48; BOOL x49; unsigned short x50; unsigned short x51; unsigned short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned short x56; unsigned short x57; unsigned short x58; unsigned int x59; unsigned int x60; } *_frameStatisticsStoragesForPortTypes;
    unsigned long long _frameCount;
    float _adrcExposureRealizedGain;
    BOOL _autoFocusRecommendedPrimaryPortTypeEnabled;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *portTypes;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) float adrcExposureRealizedGain;

+ (void)initialize;

- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)reset;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)_setFrameCount:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPortTypes:(id)a0;
- (id)initWithPortTypes:(id)a0 autoFocusRecommendedPrimaryPortTypeEnabled:(BOOL)a1;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)updateWithFrameMetadata:(id)a0 updateFocusDistance:(BOOL)a1;
- (BOOL)isEqual:(id)a0;

@end
