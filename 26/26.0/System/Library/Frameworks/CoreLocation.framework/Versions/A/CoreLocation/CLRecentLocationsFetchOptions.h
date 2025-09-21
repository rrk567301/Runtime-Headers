@class NSNumber, NSDate;

@interface CLRecentLocationsFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSNumber *machContinuousTimeSeconds;
@property (readonly, copy, nonatomic) NSNumber *numberOfSeconds;
@property (readonly, nonatomic) BOOL returnSparseLocations;
@property (readonly, nonatomic) BOOL allowDelayedResponse;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithDate:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id)initWithDate:(id)a0 machContinuousTimeSeconds:(id)a1 numberOfSeconds:(id)a2 allowDelayedResponse:(BOOL)a3 returnSparseLocations:(BOOL)a4;
- (id)initWithMachContinuousTimeSeconds:(id)a0;
- (id)initWithMachContinuousTimeSeconds:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id)initWithNumberOfSeconds:(id)a0;
- (id)initWithNumberOfSeconds:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id)initWithNumberOfSeconds:(id)a0 allowDelayedResponse:(BOOL)a1 returnSparseLocations:(BOOL)a2;
- (id)initWithNumberOfSeconds:(id)a0 returnSparseLocations:(BOOL)a1;

@end
