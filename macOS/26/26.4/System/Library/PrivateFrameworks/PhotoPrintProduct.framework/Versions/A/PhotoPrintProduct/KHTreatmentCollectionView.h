@class NSTrackingArea;
@protocol KHTreatmentCollectionDelegate;

@interface KHTreatmentCollectionView : UXCollectionView

@property (weak, nonatomic) id<KHTreatmentCollectionDelegate> delegate;
@property (retain) NSTrackingArea *trackingArea;

- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)updateTrackingAreas;

@end
