@interface PGDisplayMode : NSObject {
    double _refreshRateInHz;
    char _supportsEDR;
    char _supports10bpc;
}

@property (nonatomic) char supportsEDR;
@property (nonatomic) char supports10bpc;
@property (readonly, nonatomic) struct { unsigned short x; unsigned short y; } sizeInPixels;
@property (readonly, nonatomic) double refreshRate;

- (id)initWithSizeInPixels:(struct { unsigned short x0; unsigned short x1; })a0 refreshRateInHz:(double)a1;

@end
