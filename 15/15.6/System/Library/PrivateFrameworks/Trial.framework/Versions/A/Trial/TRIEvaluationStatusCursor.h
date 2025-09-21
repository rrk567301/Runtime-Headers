@class NSDate;

@interface TRIEvaluationStatusCursor : NSObject <NSCopying, NSSecureCoding> {
    double _secondsFromEpoch;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSecondsFromEpoch:(double)a0;

@end
