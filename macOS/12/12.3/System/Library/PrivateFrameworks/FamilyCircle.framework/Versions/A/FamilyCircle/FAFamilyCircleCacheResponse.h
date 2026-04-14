@class NSDate, FAFamilyCircle;

@interface FAFamilyCircleCacheResponse : NSObject

@property (retain, nonatomic) FAFamilyCircle *familyCircle;
@property (retain, nonatomic) NSDate *cacheDate;
@property (nonatomic) double maxAge;

- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0 cacheDate:(id)a1 maxAge:(double)a2;
- (id)familyCircleValidatingAgeWithDate:(id)a0;
- (BOOL)_isFamilyCircleFresh:(id)a0;
- (id)familyCircleIfFresh;
- (BOOL)isFamilyCircleFresh;

@end
