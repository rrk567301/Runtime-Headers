@class GEOComposedRouteAdvisoryItem;
@protocol IncidentExtendedDetailCellDelegate;

@interface MKIncidentExtendedDetailCell : MKTableViewCell {
    GEOComposedRouteAdvisoryItem *_advisoryItem;
}

@property (weak, nonatomic) id<IncidentExtendedDetailCellDelegate> delegate;

- (void).cxx_destruct;
- (void)configureWithAdvisoryItem:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
