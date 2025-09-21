@class NSData, NSString, NSArray, NSDate, GEOComposedRoute, GEONavigabilityInfo, GEOPBTransitArtwork, MNActiveRouteInfo, NSMutableArray, MNTrafficIncidentTriggerRange, GEORouteIncident, GEOTrafficBannerText;

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding> {
    GEOTrafficBannerText *_geoTrafficBannerText;
    NSArray *_buttonActionTitles;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double newEstimatedTime;
@property (readonly, nonatomic) double oldEstimatedTime;
@property (readonly, nonatomic) double oldHistoricTime;
@property (readonly, nonatomic) NSMutableArray *oldRouteIncidents;
@property (nonatomic) char shouldShowTimer;
@property (nonatomic) double alertDisplayDuration;
@property (nonatomic) double distanceToDestination;
@property (readonly, nonatomic) NSData *alertID;
@property (readonly, nonatomic) NSData *etaResponseID;
@property (readonly, nonatomic) NSString *bannerID;
@property (readonly, nonatomic) unsigned long long alertType;
@property (readonly, nonatomic) NSString *bannerDescription;
@property (nonatomic) double distanceToIncident;
@property (readonly, nonatomic) NSArray *alertTitles;
@property (readonly, nonatomic) NSArray *alertDescriptions;
@property (readonly, nonatomic) NSArray *spokenTexts;
@property (readonly, nonatomic) GEORouteIncident *incident;
@property (readonly, nonatomic) MNActiveRouteInfo *mainRouteInfo;
@property (readonly, nonatomic) GEOComposedRoute *originalRoute;
@property (readonly, nonatomic) GEONavigabilityInfo *originalRouteNavigability;
@property (readonly, nonatomic) MNActiveRouteInfo *alternateRouteInfo;
@property (readonly, nonatomic) GEOComposedRoute *alternateRoute;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } incidentCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } startValidCoordinateRange;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } endValidCoordinateRange;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } alternateEndValidCoordinateRange;
@property (readonly, nonatomic) MNTrafficIncidentTriggerRange *triggerRange;
@property (readonly, nonatomic) MNTrafficIncidentTriggerRange *progressBarTriggerRange;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double minDisplayTime;
@property (readonly, nonatomic) double overlapDelayTime;
@property (readonly, nonatomic) char persistAcrossUpdates;
@property (readonly, nonatomic) NSDate *alertDate;
@property (readonly, nonatomic) char isAutomaticReroute;
@property (readonly, nonatomic) char isReroute;
@property (readonly, nonatomic) char defaultToNewRoute;
@property (readonly, nonatomic) unsigned long long secondsSaved;
@property (readonly, nonatomic) int previousBannerChange;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) NSString *analyticsMessage;
@property (readonly, nonatomic) NSData *eventInfo;

+ (void)_addDebugArguments:(id)a0;
+ (id)_validTrafficIncidentAlertsForBannerTexts:(id)a0 mainRouteInfo:(id)a1 alternateRouteInfo:(id)a2;
+ (id)createFakeTrafficBannerTextWithType:(unsigned long long)a0 mainRouteInfo:(id)a1 alternateRouteInfo:(id)a2 incidentDistance:(unsigned int)a3;
+ (id)validTrafficIncidentAlertsForETAUpdate:(id)a0 alternateRouteInfo:(id)a1;
+ (id)validTrafficIncidentAlertsForNewRoute:(id)a0 alternateRouteInfo:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dismissButtonTitle;
- (void)updateLocation:(id)a0;
- (void)_populateButtonActionAndTitles:(id)a0;
- (id)_initWithGeoTrafficBannerText:(id)a0 mainRouteInfo:(id)a1 alternateRouteInfo:(id)a2;
- (unsigned long long)_alertTypeForGeoBannerStyle:(int)a0;
- (int)_buttonDisplayForAlertAction:(unsigned long long)a0;
- (id)_buttonTitleForAlertAction:(unsigned long long)a0;
- (id)_dynamicStringValues;
- (void)_initRouteCoordinates;
- (void)_populateIncidentDetails:(id)a0;
- (void)_populateServerFields:(id)a0;
- (id)_stringForAlertType:(unsigned long long)a0;
- (int)acceptButtonDisplay;
- (id)acceptButtonTitle;
- (id)buttonActionTitles;
- (int)dismissButtonDisplay;
- (void)updateAlertIDWithAlert:(id)a0;

@end
