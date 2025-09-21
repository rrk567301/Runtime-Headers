@class NSString, CMOdometer;

@interface SMCMOdometer : NSObject <CMOdometerDelegate>

@property (readonly, nonatomic) CMOdometer *odometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)odometer:(id)a0 didUpdateGpsAvailability:(BOOL)a1;
- (void)startOdometerUpdatesForActivity:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopOdometerUpdates;

@end
