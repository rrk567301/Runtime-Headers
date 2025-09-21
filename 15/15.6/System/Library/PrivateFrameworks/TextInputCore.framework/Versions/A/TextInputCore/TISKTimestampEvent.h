@interface TISKTimestampEvent : TISKEvent

@property (nonatomic) double timestamp;

- (char)isMissingATouch;
- (id)init:(int)a0 timestamp:(double)a1 emojiSearchMode:(char)a2 order:(long long)a3;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;

@end
