@class NSString;

@interface TISKPredictionBarEvent : TISKTimestampEvent

@property (nonatomic) char emojiPrediction;
@property (retain, nonatomic) NSString *emojiBucketCategory;

- (id)description;
- (void).cxx_destruct;
- (id)init:(double)a0 emojiPrediction:(char)a1 emojiSearchMode:(char)a2 order:(long long)a3 emojiBucketCategory:(id)a4;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (void)reportToSession:(id)a0;

@end
