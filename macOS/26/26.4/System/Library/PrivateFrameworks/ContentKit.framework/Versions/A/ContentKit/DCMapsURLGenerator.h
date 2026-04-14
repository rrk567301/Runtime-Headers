@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator

@property (readonly, nonatomic) NSMutableDictionary *queryDictionary;
@property (readonly, nonatomic) DCMapsLink *mapsLink;

+ (id)URLWithMapsLink:(id)a0;

- (id)mapType;
- (id)host;
- (id)scheme;
- (id)path;
- (id)URL;
- (id)query;
- (void).cxx_destruct;
- (id)directionsMode;
- (id)initWithMapsLink:(id)a0;
- (void)populateQueryDictionary;
- (void)setString:(id)a0 forQueryKey:(id)a1;

@end
