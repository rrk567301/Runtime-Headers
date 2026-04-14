@interface FTCServiceMonitor : NSObject {
    long long _availability;
    long long _type;
    int _token;
}

@property (readonly, nonatomic) long long serviceType;

- (void)dealloc;
- (void)updateAvailability;
- (long long)serviceAvailability;
- (id)initWithServiceType:(long long)a0;
- (void)_updateAvailability;
- (void)_postAvailability:(long long)a0;

@end
