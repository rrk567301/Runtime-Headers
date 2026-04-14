@interface KNRecordingLaserEvent : KNRecordingEvent

@property (readonly, nonatomic) struct CGPoint { double x; double y; } unitLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (id)initWithStartTime:(double)a0 unitLocation:(struct CGPoint { double x0; double x1; })a1;

@end
