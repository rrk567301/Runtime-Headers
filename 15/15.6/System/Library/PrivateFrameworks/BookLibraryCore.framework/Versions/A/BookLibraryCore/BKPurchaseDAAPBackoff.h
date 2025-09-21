@class NSDate;

@interface BKPurchaseDAAPBackoff : NSObject

@property (retain, nonatomic) NSDate *backoffUntil;
@property (nonatomic) long long failureCount;

- (void).cxx_destruct;
- (void)clear;
- (char)failureIntervals:(unsigned long long)a0;
- (char)hasBackedOff;

@end
