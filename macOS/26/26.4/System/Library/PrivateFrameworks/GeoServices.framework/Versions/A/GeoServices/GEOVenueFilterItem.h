@protocol GEOVenueIdentifier, GEOVenueLabel;

@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem>

@property (readonly, nonatomic) id<GEOVenueIdentifier> filterID;
@property (readonly, nonatomic) id<GEOVenueLabel> label;
@property (readonly, nonatomic) BOOL describesParentVenue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFilterElementInfo:(id)a0;
- (id)initWithLabel:(id)a0 filterID:(id)a1;

@end
