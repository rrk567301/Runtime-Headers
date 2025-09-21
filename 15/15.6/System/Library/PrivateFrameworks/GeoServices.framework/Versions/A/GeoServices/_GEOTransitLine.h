@class GEOPBTransitLine, NSString, NSArray, GEOMapItemIdentifier, GEOStyleAttributes;
@protocol GEOTransitSystem, GEOTransitArtworkDataSource;

@interface _GEOTransitLine : NSObject <GEOTransitLine, NSSecureCoding> {
    GEOPBTransitLine *_line;
    id<GEOTransitSystem> _system;
    struct { double latitude; double longitude; } _locationHint;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
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

@end
