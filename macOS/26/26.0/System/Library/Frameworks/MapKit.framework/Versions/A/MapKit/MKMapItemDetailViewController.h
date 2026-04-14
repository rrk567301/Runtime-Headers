@class NSString, MKMapItem, MKFullDeveloperPlaceCardSelectionAccessoryView;
@protocol MKMapItemDetailViewControllerDelegate;

@interface MKMapItemDetailViewController : NSViewController <MKSelectionAccessoryViewDelegate> {
    BOOL _displaysMap;
    MKFullDeveloperPlaceCardSelectionAccessoryView *_accessoryView;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKMapItemDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 displaysMap:(BOOL)a1;
- (void)selectionAccessoryViewDidRequestDismissal:(id)a0;

@end
