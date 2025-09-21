@class GEOComposedString, GEOPBTransitArtwork, NSArray;
@protocol GEOServerFormattedString;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding, NSCopying> {
    char _initialisedForTransit;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) GEOComposedString *titleString;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) char isClickable;
@property (readonly, nonatomic) NSArray *advisoryItems;
@property (readonly, nonatomic) NSArray *analyticsMessageValues;
@property (readonly, nonatomic) GEOComposedString *detailCardTitle;

+ (id)_fallbackAdvisoryArtwork;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInitWithAdvisoryNotice:(id)a0 artwork:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 incidents:(id)a1;
- (id)initWithGeoAdvisoryNotice:(id)a0 transitIncidents:(id)a1;

@end
