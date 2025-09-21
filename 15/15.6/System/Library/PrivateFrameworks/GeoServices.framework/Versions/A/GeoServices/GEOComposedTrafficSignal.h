@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficSignal *_trafficSignal;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) char hasCountryCode;
@property (readonly, nonatomic) unsigned int countryCode;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)position;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 trafficSignal:(id)a3 onRoute:(id)a4;

@end
