@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (id)description;
- (long long)serviceAvailability;
- (void)_updateAvailability;
- (void)updateAvailability;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(id)a0;
- (void)_postAvailability:(long long)a0;

@end
