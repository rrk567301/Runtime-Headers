@interface TISKEmojiSearchEvent : TISKTimestampEvent

@property (nonatomic) char engaged;

- (id)description;
- (id)init:(double)a0 engaged:(char)a1 order:(long long)a2;
- (void)reportToSession:(id)a0;

@end
