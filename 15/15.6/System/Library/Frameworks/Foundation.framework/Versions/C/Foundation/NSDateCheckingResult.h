@class NSDate, NSString, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    char _timeIsSignificant;
    char _timeIsApproximate;
    char _timeIsPast;
    NSString *_leadingText;
    NSString *_trailingText;
}

@property (readonly) NSTimeZone *timeZone;
@property (readonly) double duration;
@property (readonly) NSDate *referenceDate;
@property (readonly) void *underlyingResult;
@property (readonly) char timeIsSignificant;
@property (readonly) char timeIsApproximate;
@property (readonly) char timeIsPast;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)date;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (char)_adjustRangesWithOffset:(long long)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5 timeIsSignificant:(char)a6 timeIsApproximate:(char)a7;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5 timeIsSignificant:(char)a6 timeIsApproximate:(char)a7 timeIsPast:(char)a8;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5 timeIsSignificant:(char)a6 timeIsApproximate:(char)a7 timeIsPast:(char)a8 leadingText:(id)a9 trailingText:(id)a10;
- (id)leadingText;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (unsigned long long)resultType;
- (id)trailingText;

@end
