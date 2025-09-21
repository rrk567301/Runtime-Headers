@class TISKTap;

@interface TISKEvent : NSObject <TISKEventProtocol>

@property (nonatomic) int type;
@property (retain, nonatomic) TISKTap *tap;
@property (nonatomic) char emojiSearchMode;
@property (nonatomic) unsigned long long order;
@property (nonatomic) char hasTimestamp;

- (id)description;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)init:(int)a0 emojiSearchMode:(char)a1 order:(long long)a2 tap:(id)a3;
- (char)isMissingATouch;
- (id)downTouchEvent;
- (id)init:(int)a0 emojiSearchMode:(char)a1 order:(long long)a2;
- (char)isValidCandidate:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (void)reportToSession:(id)a0;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (id)upTouchEvent;

@end
