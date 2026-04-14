@class NSString;

@interface NAFConnectionAvailabilityObserver : NSObject <NAFNetworkAvailabilityObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkAvailability:(id)a0 isAvailable:(BOOL)a1;

@end
