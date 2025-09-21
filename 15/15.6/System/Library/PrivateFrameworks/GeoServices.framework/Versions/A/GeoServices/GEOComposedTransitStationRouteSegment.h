@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment

- (long long)type;
- (char)hasEnterStationManeuver;
- (char)hasExitStationManeuver;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 transitStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 segmentIndex:(unsigned long long)a5;
- (char)isTransfer;

@end
