@class NSDate;

@interface PKPaymentValidationCacheEntry : NSObject

@property (nonatomic) BOOL result;
@property (retain, nonatomic) NSDate *timestamp;

- (double)elapsedTime;
- (id)initWithResult:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isExpiredWith:(double)a0;

@end
