@interface DCGoogleMapsURLGenerator : DCMapsURLGenerator

- (id)scheme;
- (id)path;
- (id)host;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
