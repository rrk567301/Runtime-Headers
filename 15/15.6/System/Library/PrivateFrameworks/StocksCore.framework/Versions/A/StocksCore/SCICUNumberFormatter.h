@interface SCICUNumberFormatter : NSObject

- (id)formattedCount:(long long)a0;
- (id)formattedCount:(long long)a0 withLocale:(id)a1;
- (id)formattedCount:(long long)a0 withLocale:(id)a1 longform:(char)a2;
- (id)formattedCount:(long long)a0 withLocale:(id)a1 longform:(char)a2 compactDisplay:(char)a3;

@end
