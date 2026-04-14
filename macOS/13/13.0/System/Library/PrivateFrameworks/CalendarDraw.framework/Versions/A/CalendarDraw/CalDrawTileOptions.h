@interface CalDrawTileOptions : NSObject <NSCopying>

@property BOOL selected;
@property BOOL dimmed;
@property BOOL declined;
@property BOOL canceled;
@property BOOL maybe;
@property BOOL needsReply;
@property BOOL colorBar;
@property BOOL darkBackground;
@property BOOL vibrantBackground;
@property BOOL fillDot;
@property BOOL noBorder;
@property BOOL outline;
@property BOOL large;
@property BOOL dash;
@property BOOL flippedForRTL;
@property int outlineColor;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
