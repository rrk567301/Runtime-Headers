@class NSString, NSData, CLLocation, MKMapItem;

@interface EKMapSearchCompletionResolution : NSObject

@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSData *mapKitHandle;

- (void).cxx_destruct;

@end
