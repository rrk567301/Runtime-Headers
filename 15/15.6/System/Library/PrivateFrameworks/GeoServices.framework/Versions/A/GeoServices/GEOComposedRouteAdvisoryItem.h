@class GEOPBTransitArtwork, NSArray, GEOComposedString, NSDate, GEOAdvisoryCardAction;
@protocol GEOServerFormattedString;

@interface GEOComposedRouteAdvisoryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) GEOComposedString *titleString;
@property (readonly, nonatomic) id<GEOServerFormattedString> subtitle;
@property (readonly, nonatomic) GEOComposedString *subtitleString;
@property (readonly, nonatomic) NSDate *dateOfLastUpdate;
@property (readonly, nonatomic) id<GEOServerFormattedString> dateOfLastUpdateDescription;
@property (readonly, nonatomic) GEOComposedString *dateOfLastUpdateString;
@property (readonly, nonatomic) NSArray *details;
@property (readonly, nonatomic) id<GEOServerFormattedString> attribution;
@property (readonly, nonatomic) GEOComposedString *attributionString;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOAdvisoryCardAction *cardAction;
@property (readonly, nonatomic) char isNonTransitIncident;
@property (readonly, nonatomic) NSArray *analyticsMessageValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_detailsForIncident:(id)a0;
- (id)initWithAdvisoryItem:(id)a0 routeIncidents:(id)a1 fallbackIcon:(id)a2;
- (id)initWithAdvisoryItem:(id)a0 transitIncidents:(id)a1 fallbackIcon:(id)a2;

@end
