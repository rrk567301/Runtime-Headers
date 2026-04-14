@class NSDate;

@interface PKPaymentValidationCacheEntry : NSObject

@property (nonatomic) BOOL result;
@property (retain, nonatomic) NSDate *timestamp;

- (double)elapsedTime;
- (void).cxx_destruct;
- (id)initWithResult:(BOOL)a0;
- (BOOL)isExpiredWith:(double)a0;

@end
