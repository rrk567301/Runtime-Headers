@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (void).cxx_destruct;
- (void)_postAvailability:(long long)a0;
- (id)description;
- (void)updateAvailability;
- (id)initWithService:(id)a0;
- (long long)serviceAvailability;
- (void)_updateAvailability;
- (void)dealloc;

@end
