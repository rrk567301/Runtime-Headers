@class NSNumber, NSDate;

@interface RTLocationsFromCoreLocationFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSNumber *machContinuousTimeSec;
@property (readonly, copy, nonatomic) NSNumber *numberOfSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithNumberOfSeconds:(id)a0;
- (id)initWithDate:(id)a0 machContinuousTimeSec:(id)a1 numberOfSeconds:(id)a2;
- (id)initWithMachContinuousTimeSec:(id)a0;

@end
