@class NSString, MKMapItem;

@interface _MapKit_SwiftUI.MapBridgingCustomAnnotation : NSObject <MKAnnotation, MKMapItemRepresenting> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* unknown type, empty encoding */ mapItem;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (nonatomic, readonly) MKMapItem *representedMapItem;

- (id)init;
- (void).cxx_destruct;
- (id)_representedMapItem;

@end
