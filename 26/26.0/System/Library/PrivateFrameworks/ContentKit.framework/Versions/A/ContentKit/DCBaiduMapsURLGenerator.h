@interface DCBaiduMapsURLGenerator : DCMapsURLGenerator

- (id)scheme;
- (id)path;
- (id)host;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
