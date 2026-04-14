@class NSString;

@interface TSWPTab : NSObject <NSCopying>

@property (nonatomic) double position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString *leader;

+ (id)tab;
+ (id)tabLeaderFromDisplayString:(id)a0;
+ (int)tabAlignmentFromString:(id)a0 isRTL:(BOOL)a1;
+ (id)displayStringFromTabLeader:(id)a0;
+ (id)tabStopAlignmentStringTop;
+ (id)tabStopAlignmentStringMiddle;
+ (id)tabStopAlignmentStringBottom;
+ (id)tabStopAlignmentStringLeft;
+ (id)tabStopAlignmentStringCenter;
+ (id)tabStopAlignmentStringRight;
+ (id)tabStopAlignmentStringDecimal;
+ (id)tabStopDisplayStringNone;
+ (id)tabStopDisplayStringPoint;
+ (id)tabStopDisplayStringDash;
+ (id)tabStopDisplayStringUnderscore;
+ (id)tabStopDisplayStringArrow;
+ (id)tabStopLeaderStringPoint;
+ (id)tabStopLeaderStringDash;
+ (id)tabStopLeaderStringUnderscore;
+ (id)tabStopLeaderStringArrow;
+ (id)tabStopLeaderStringArrowRTL;
+ (id)stringFromTabAlignment:(int)a0 isRTL:(BOOL)a1 isVertical:(BOOL)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (double)positionInInches;
- (void)setPositionInInches:(double)a0;
- (id)initWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (long long)compareToPosition:(double)a0;
- (BOOL)isEqualToPosition:(double)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
