@class FCDateRange, FCFeedCursor;

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) FCFeedCursor *top;
@property (copy, nonatomic) FCFeedCursor *bottom;
@property (readonly, nonatomic) unsigned long long maxOrder;
@property (readonly, nonatomic) unsigned long long minOrder;
@property (readonly, copy, nonatomic) FCFeedCursor *middle;
@property (readonly, nonatomic) char reachesTopOfFeed;
@property (readonly, nonatomic) char reachesBottomOfFeed;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, copy, nonatomic) FCDateRange *dateRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } nsRange;
@property (readonly, nonatomic) double timeInterval;

+ (id)feedRangeWithMaxOrder:(unsigned long long)a0 minOrder:(unsigned long long)a1;
+ (id)feedRangeByMergingRange:(id)a0 withRange:(id)a1;
+ (id)feedRangeFromDate:(id)a0 toDate:(id)a1;
+ (id)feedRangeFromDateRange:(id)a0;
+ (id)feedRangeWithTop:(id)a0 bottom:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)intersectsRange:(id)a0;
- (char)containsCursor:(id)a0;
- (unsigned long long)clampOrder:(unsigned long long)a0;
- (char)containsFeedRange:(id)a0;
- (char)containsOrder:(unsigned long long)a0;
- (id)feedRangeByIntersectingWithRange:(id)a0;
- (id)feedRangeByUnioningWithRange:(id)a0;
- (char)intersectsOrAdjoinsRange:(id)a0;

@end
