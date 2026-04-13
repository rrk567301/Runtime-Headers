@class GEOComposedAdvisoryItem;

@interface MKIncidentExtendedDetailCell : MKTableViewCell {
    GEOComposedAdvisoryItem *_advisoryItem;
}

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)configureWithGEORouteIncident:(id)a0;
- (void)configureWithGEOAdvisoryCard:(id)a0;
- (void)configureWithAdvisoryItem:(id)a0;

@end
