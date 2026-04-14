@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (void)updateAvailability;
- (id)initWithService:(id)a0;
- (void)_postAvailability:(long long)a0;
- (void)_updateAvailability;
- (void).cxx_destruct;
- (long long)serviceAvailability;
- (id)description;
- (void)dealloc;

@end
