@class NSTrackingArea;
@protocol KHTreatmentCollectionDelegate;

@interface KHTreatmentCollectionView : UXCollectionView

@property (weak, nonatomic) id<KHTreatmentCollectionDelegate> delegate;
@property (retain) NSTrackingArea *trackingArea;

- (void)updateTrackingAreas;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;

@end
