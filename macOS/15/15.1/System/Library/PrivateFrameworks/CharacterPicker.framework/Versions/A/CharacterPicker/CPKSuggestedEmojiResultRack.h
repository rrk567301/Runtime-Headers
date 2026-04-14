@class NSMutableDictionary;

@interface CPKSuggestedEmojiResultRack : NSObject

@property (retain, nonatomic) NSMutableDictionary *stringToRangesMapping;
@property (retain, nonatomic) NSMutableDictionary *rangeToEmojisMapping;
@property (retain, nonatomic) NSMutableDictionary *rangeToStickersMapping;

- (void)dealloc;
- (void)addSticker:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)emojiResultsSortedByRange;
- (void)setEmojis:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
