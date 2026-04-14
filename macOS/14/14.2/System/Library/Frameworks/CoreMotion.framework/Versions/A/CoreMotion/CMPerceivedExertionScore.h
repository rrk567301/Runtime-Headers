@class NSUUID, NSNumber, NSDate;

@interface CMPerceivedExertionScore : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *fOverviewId;
    NSDate *fEventTime;
    NSDate *fResponseTime;
    long long fResponseType;
    NSNumber *fPerceivedExertionScore;
    NSNumber *fMinExertionScore;
    NSNumber *fMaxExertionScore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) NSDate *responseTime;
@property (readonly, nonatomic) NSUUID *overviewId;
@property (readonly, nonatomic) long long responseType;
@property (readonly, nonatomic) NSNumber *perceivedExertionScore;
@property (readonly, nonatomic) NSNumber *minExertionScore;
@property (readonly, nonatomic) NSNumber *maxExertionScore;

+ (BOOL)isAvailable;
+ (id)responseTypeString:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOverviewId:(id)a0 eventTime:(id)a1 responseTime:(id)a2 responseType:(long long)a3 perceivedExertionScore:(id)a4 minExertionScore:(id)a5 maxExertionScore:(id)a6;

@end
