@class GEOFeatureStyleAttributes, EKStructuredLocation, CRRecentContact;

@interface EKRecentContactSearchResult : NSObject

@property (retain, nonatomic) CRRecentContact *recent;
@property (retain, nonatomic) GEOFeatureStyleAttributes *attributes;
@property (readonly, nonatomic) EKStructuredLocation *location;

- (id)description;
- (void).cxx_destruct;
- (id)conferenceRoomForSource:(id)a0;

@end
