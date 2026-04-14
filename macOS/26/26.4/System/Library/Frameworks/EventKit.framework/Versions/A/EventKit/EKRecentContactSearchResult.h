@class GEOFeatureStyleAttributes, EKStructuredLocation, CRRecentContact;

@interface EKRecentContactSearchResult : NSObject

@property (retain, nonatomic) CRRecentContact *recent;
@property (retain, nonatomic) GEOFeatureStyleAttributes *attributes;
@property (readonly, nonatomic) EKStructuredLocation *location;

- (void).cxx_destruct;
- (id)description;
- (id)conferenceRoomForSource:(id)a0;

@end
