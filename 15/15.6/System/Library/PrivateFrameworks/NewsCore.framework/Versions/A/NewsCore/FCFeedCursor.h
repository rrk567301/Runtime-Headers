@class NSDate;

@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) char isTopOfFeed;
@property (readonly, nonatomic) char isBottomOfFeed;
@property (readonly, copy, nonatomic) NSDate *date;

+ (id)cursorForTimeIntervalBeforeNow:(double)a0;
+ (id)cursorForOrder:(unsigned long long)a0;
+ (id)cursorForBottomOfFeed;
+ (id)cursorForCurrentDate;
+ (id)cursorForDate:(id)a0;
+ (id)cursorForTopOfFeed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bottommostCursor:(id)a0;
- (long long)compareToCursor:(id)a0;
- (char)hasReachedCursor:(id)a0;
- (char)isEqualToCursor:(id)a0;
- (id)topmostCursor:(id)a0;

@end
