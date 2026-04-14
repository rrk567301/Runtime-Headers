@interface DCBaiduMapsURLGenerator : DCMapsURLGenerator

- (id)scheme;
- (id)host;
- (id)path;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
