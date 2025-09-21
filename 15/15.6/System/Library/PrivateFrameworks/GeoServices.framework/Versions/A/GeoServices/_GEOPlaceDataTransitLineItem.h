@class NSArray, NSString, GEOMapItemIdentifier, GEOMapRegion;
@protocol GEOTransitLine, GEOMapItemTransitInfo, GEOTransitAttribution, GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitSystem;

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {
    id<GEOTransitAttribution> _attribution;
    id<GEOTransitLine> _line;
    id<GEOMapItemTransitInfo> _transitInfo;
    GEOMapRegion *_mapRegion;
    char _hasEncyclopedicInfo;
    id<GEOEncyclopedicInfo> _encyclopedicInfo;
}

@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) id<GEOTransitAttribution> attribution;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) char isIncidentsTTLExpired;
@property (readonly, nonatomic) char hasIncidentComponent;
@property (readonly, nonatomic) char hasEncyclopedicInfo;
@property (readonly, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) char departuresAreVehicleSpecific;
@property (readonly, nonatomic) char isBus;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> modeArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> alternateArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> headerArtwork;
@property (readonly, nonatomic) char hasLineColorString;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) char showVehicleNumber;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0;

@end
