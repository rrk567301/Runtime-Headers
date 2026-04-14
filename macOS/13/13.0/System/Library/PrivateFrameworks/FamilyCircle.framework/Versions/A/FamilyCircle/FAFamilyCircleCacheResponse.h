@class NSDate, NSString, FAFamilyCircle;

@interface FAFamilyCircleCacheResponse : NSObject

@property (retain, nonatomic) FAFamilyCircle *familyCircle;
@property (retain, nonatomic) NSDate *cacheDate;
@property (copy, nonatomic) NSString *serverTag;
@property (nonatomic) double maxAge;
@property (readonly, nonatomic) NSDate *expiration;

- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0 serverTag:(id)a1 cacheDate:(id)a2 maxAge:(double)a3;
- (id)familyCircleIfFresh;
- (id)familyCircleValidatingAgeWithDate:(id)a0;
- (BOOL)isFamilyCircleFresh;
- (BOOL)_isFamilyCircleFresh:(id)a0;

@end
