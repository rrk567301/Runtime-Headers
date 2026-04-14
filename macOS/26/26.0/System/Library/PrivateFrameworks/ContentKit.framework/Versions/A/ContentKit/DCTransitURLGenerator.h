@interface DCTransitURLGenerator : DCMapsURLGenerator

- (id)scheme;
- (id)path;
- (id)host;
- (void)populateQueryDictionary;

@end
