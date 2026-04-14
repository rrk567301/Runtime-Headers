@interface KNRecordingPauseEvent : KNRecordingEvent

@property (readonly, nonatomic) long long pauseEventType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (id)initWithStartTime:(double)a0 pauseEventType:(long long)a1;

@end
