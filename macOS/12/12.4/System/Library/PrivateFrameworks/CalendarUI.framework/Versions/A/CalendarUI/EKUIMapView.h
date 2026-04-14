@class NSURL, MKMapItem, NSString;

@interface EKUIMapView : MKMapView <NSAccessibilityImage>

@property (retain) NSURL *mapHandleURL;
@property (retain) MKMapItem *location;
@property (retain) MKMapItem *startLocation;
@property (copy) NSString *searchString;
@property BOOL directionsAreWalking;
@property BOOL suggestedEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetCursorRects;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)scrollWheel:(id)a0;

@end
