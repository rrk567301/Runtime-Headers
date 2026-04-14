@interface DCTransitURLGenerator : DCMapsURLGenerator

- (id)scheme;
- (id)host;
- (id)path;
- (void)populateQueryDictionary;

@end
