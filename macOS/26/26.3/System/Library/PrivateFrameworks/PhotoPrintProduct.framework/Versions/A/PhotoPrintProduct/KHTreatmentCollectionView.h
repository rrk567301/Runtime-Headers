@class NSTrackingArea;
@protocol KHTreatmentCollectionDelegate;

@interface KHTreatmentCollectionView : UXCollectionView

@property (weak, nonatomic) id<KHTreatmentCollectionDelegate> delegate;
@property (retain) NSTrackingArea *trackingArea;

- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void).cxx_destruct;

@end
