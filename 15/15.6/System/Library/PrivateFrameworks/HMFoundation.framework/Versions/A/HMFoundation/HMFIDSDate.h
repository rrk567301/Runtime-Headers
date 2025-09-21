@class NSString, NSDate;

@interface HMFIDSDate : NSObject <HMFDateProvider>

@property (readonly, copy, nonatomic) NSDate *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timeIntervalSince1970;

@end
