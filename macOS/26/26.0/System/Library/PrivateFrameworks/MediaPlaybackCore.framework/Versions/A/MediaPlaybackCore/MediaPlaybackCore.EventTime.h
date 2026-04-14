@interface MediaPlaybackCore.EventTime : _TtCs12_SwiftObject <MFTimeStamp> {
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic) double time;
@property (nonatomic, readonly) double avTime;
@property (nonatomic, readonly) double userSecondsSinceReferenceDate;
@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } hostTime;

@end
