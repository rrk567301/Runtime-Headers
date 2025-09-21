@interface CalDrawTileOptions : NSObject <NSCopying>

@property char selected;
@property char dimmed;
@property char declined;
@property char canceled;
@property char maybe;
@property char needsReply;
@property char colorBar;
@property char darkBackground;
@property char fillDot;
@property char large;
@property char flippedForRTL;
@property char reminder;
@property char completed;
@property int reminderStackDepth;
@property char allDay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
