@class NSDictionary;

@interface SHHapticsConfiguration : NSObject

@property (readonly, copy, nonatomic) NSDictionary *hapticsEndpoints;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)baseURLString;
- (id)fetchHapticsURLStringForClientIdentifier:(id)a0 songResourceIDType:(long long)a1;
- (id)hapticsAvailableURLStringForClientIdentifier:(id)a0 songResourceIDType:(long long)a1;
- (id)hapticsEndpointsForStorefront:(id)a0 clientIdentifier:(id)a1;
- (id)pathStringForClientIdentifier:(id)a0 songResourceIDType:(long long)a1 requestKey:(id)a2;

@end
