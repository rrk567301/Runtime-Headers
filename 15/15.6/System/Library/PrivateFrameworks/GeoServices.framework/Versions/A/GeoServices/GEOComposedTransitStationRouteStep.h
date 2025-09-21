@class GEOTransitTransferInfo, NSString, GEOTransitEnterExitInfo, GEOPBTransitAccessPoint;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {
    GEOTransitEnterExitInfo *_enterExitInfo;
}

@property (readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint;
@property (readonly, nonatomic) unsigned int expectedTime;
@property (readonly, nonatomic) GEOTransitTransferInfo *transitTransfer;
@property (readonly, nonatomic) char isArrivalUncertain;
@property (readonly, nonatomic) NSString *exitSign;
@property (readonly, nonatomic) char displayStop;
@property (readonly, nonatomic) char hasDisplayStop;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; double x2; })endGeoCoordinate;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 step:(id)a2 stepIndex:(unsigned long long)a3 duration:(unsigned int)a4 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (struct { double x0; double x1; double x2; })startGeoCoordinate;

@end
