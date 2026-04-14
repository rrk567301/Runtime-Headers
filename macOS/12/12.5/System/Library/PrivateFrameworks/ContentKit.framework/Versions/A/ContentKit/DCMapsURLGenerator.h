@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator

@property (readonly, nonatomic) NSMutableDictionary *queryDictionary;
@property (readonly, nonatomic) DCMapsLink *mapsLink;

+ (id)URLWithMapsLink:(id)a0;

- (void).cxx_destruct;
- (id)scheme;
- (id)host;
- (id)query;
- (id)path;
- (id)URL;
- (id)mapType;
- (id)directionsMode;
- (void)setString:(id)a0 forQueryKey:(id)a1;
- (void)populateQueryDictionary;
- (id)initWithMapsLink:(id)a0;

@end
