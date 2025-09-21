@interface TISKCharKeyEvent : TISKInputEvent

@property (nonatomic) long long wordPosition;
@property (nonatomic) char isShortWord;

- (id)description;
- (id)privateDescription;
- (long long)_metricWordKeyPostion:(long long)a0;
- (id)init:(id)a0 emojiSearchMode:(char)a1 order:(long long)a2;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (void)reportToSession:(id)a0;

@end
