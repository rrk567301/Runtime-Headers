@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (id)initWithService:(id)a0;
- (void)_postAvailability:(long long)a0;
- (void)_updateAvailability;
- (id)description;
- (long long)serviceAvailability;
- (void)dealloc;
- (void)updateAvailability;
- (void).cxx_destruct;

@end
