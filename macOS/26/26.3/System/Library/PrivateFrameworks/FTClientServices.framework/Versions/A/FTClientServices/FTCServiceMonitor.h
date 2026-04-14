@interface FTCServiceMonitor : NSObject {
    long long _availability;
    long long _type;
    int _token;
}

@property (readonly, nonatomic) long long serviceType;

- (long long)serviceAvailability;
- (void)_updateAvailability;
- (void)updateAvailability;
- (id)initWithServiceType:(long long)a0;
- (void)dealloc;
- (void)_postAvailability:(long long)a0;

@end
