@class NSUUID, NSString, NSArray, GEOJunctionView, NSData, GEOGuidanceEvent, GEOComposedString, GEOJunction, GEONameInfo;
@protocol GEOServerFormattedString, GEOTransitArtworkDataSource;

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding> {
    unsigned long long _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    NSArray *_lanes;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) char hasSignGuidance;
@property (readonly, nonatomic) char hasSpokenGuidance;
@property (readonly, nonatomic) char hasJunctionView;
@property (readonly, nonatomic) char hasArGuidance;
@property (readonly, nonatomic) unsigned long long stackRanking;
@property (readonly, nonatomic) NSArray *primarySignStrings;
@property (readonly, nonatomic) NSArray *secondarySignStrings;
@property (readonly, nonatomic) NSArray *spokenStrings;
@property (readonly, nonatomic) NSArray *primaryLaneStrings;
@property (readonly, nonatomic) NSArray *secondaryLaneStrings;
@property (readonly, nonatomic) GEOComposedString *navTrayTitleString;
@property (readonly, nonatomic) GEOComposedString *navTrayDetailString;
@property (readonly, nonatomic) GEOComposedString *arInstructionString;
@property (readonly, nonatomic) NSArray *signTitles;
@property (readonly, nonatomic) NSArray *signDetails;
@property (readonly, nonatomic) GEONameInfo *shieldInfo;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) GEOJunction *maneuverJunction;
@property (readonly, nonatomic) GEOJunctionView *junctionView;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkOverride;
@property (readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property (readonly, nonatomic) NSArray *announcements;
@property (readonly, nonatomic) double repetitionInterval;
@property (readonly, nonatomic) char hasHaptics;
@property (readonly, nonatomic) char isSticky;
@property (readonly, nonatomic) char isImportant;
@property (readonly, nonatomic) char isSpecial;
@property (readonly, nonatomic) NSArray *lanes;
@property (readonly, nonatomic) NSArray *laneTitles;
@property (readonly, nonatomic) NSArray *laneInstructions;
@property (readonly, nonatomic) int composedGuidanceEventType;
@property (readonly, nonatomic) char isLaneGuidanceForManeuver;
@property (readonly, nonatomic) unsigned long long numChainedAnnouncements;
@property (readonly, nonatomic) id<GEOServerFormattedString> arInstruction;
@property (readonly, nonatomic) NSString *arArrowLabel;
@property (readonly, nonatomic) int arType;
@property (readonly, nonatomic) NSArray *gapRanges;
@property (readonly, nonatomic) NSData *serverRouteID;
@property (readonly, nonatomic) unsigned int stepID;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSString *roadName;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } startValidRouteCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } endValidRouteCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } coordinateForDistanceStrings;
@property (readonly, nonatomic) double startValidDistance;
@property (readonly, nonatomic) double endValidDistance;
@property (readonly, nonatomic) double distanceForStrings;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long sourceIndex;
@property (nonatomic) unsigned long long enrouteNoticeIndex;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_junctionViewIDForData:(id)a0;
- (long long)compareFactoringInSpeed:(id)a0 speed:(double)a1;
- (long long)comparePriority:(id)a0;
- (double)desiredTimeGapToEvent:(id)a0 chained:(char)a1;
- (double)endDistanceForSpeed:(double)a0;
- (id)initWithGeoGuidanceEvent:(id)a0 step:(id)a1 legIndex:(unsigned long long)a2 coordinates:(id)a3;
- (char)isValidForSpeed:(double)a0;
- (double)startDistanceForSpeed:(double)a0;
- (double)triggerDistanceForSpeed:(double)a0 andDuration:(id /* block */)a1;

@end
