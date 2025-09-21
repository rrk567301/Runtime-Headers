@interface AXPageTurningReplayableGesture : AXReplayableGesture

@property (nonatomic) char isLeftToRightSwipe;
@property (nonatomic) char isLandscape;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)a0;
- (double)forceForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x0; double x1; })pointForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (double)timeAtEventIndex:(unsigned long long)a0;
- (char)arePointsDeviceRelative;
- (id)initForLeftToRightSwipe:(char)a0;
- (void)updateForLandscape:(char)a0;

@end
