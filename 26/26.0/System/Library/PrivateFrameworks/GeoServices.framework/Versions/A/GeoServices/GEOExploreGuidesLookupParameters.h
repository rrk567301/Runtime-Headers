@class NSString, GEOLatLng, GEOMapItemIdentifier, GEOPDExploreGuidesLookupParameters;

@interface GEOExploreGuidesLookupParameters : NSObject

@property (retain, nonatomic) GEOLatLng *referenceLocation;
@property (retain, nonatomic) NSString *airportCode;
@property (retain, nonatomic) NSString *cityName;
@property (retain, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (nonatomic) unsigned long long supportedPunchoutType;
@property (readonly, nonatomic) GEOPDExploreGuidesLookupParameters *pdParams;

- (void).cxx_destruct;

@end
