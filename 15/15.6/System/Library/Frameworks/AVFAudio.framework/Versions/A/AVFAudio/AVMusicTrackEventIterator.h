@interface AVMusicTrackEventIterator : NSObject {
    struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator *x0; } *_impl;
}

- (id)initWithImpl:(struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator *x0; } *)a0;
- (int)previousEvent;
- (char)setEventTime:(double)a0;
- (void)deleteEvent;
- (int)nextEvent;
- (void)seek:(double)a0;
- (char)hasCurrentEvent;
- (void)getEventInfo:(double *)a0 outEventType:(unsigned int *)a1 eventData:(void **)a2 dataSize:(unsigned int *)a3;
- (char)hasNextEvent;
- (char)hasPreviousEvent;
- (char)setEventInfo:(unsigned int)a0 data:(const void *)a1;

@end
