@class NSString;

@interface DCCityMapperURLGenerator : DCMapsURLGenerator

@property (retain, nonatomic) NSString *startCoordinate;
@property (retain, nonatomic) NSString *endCoordinate;

+ (void)generateURLWithMapsLink:(id)a0 completionHandler:(id /* block */)a1;

- (id)scheme;
- (id)path;
- (id)host;
- (void).cxx_destruct;
- (void)populateQueryDictionary;

@end
