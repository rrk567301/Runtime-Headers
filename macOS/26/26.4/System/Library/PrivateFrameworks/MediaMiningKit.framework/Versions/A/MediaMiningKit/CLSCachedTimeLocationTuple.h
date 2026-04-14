@class NSString, NSDate;

@interface CLSCachedTimeLocationTuple : NSObject <CLSTimeLocationTuple>

@property (readonly, nonatomic) NSDate *lastValidatedDate;
@property (readonly, nonatomic) NSString *timeLocationIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueryLocation:(id)a0 lastValidatedDate:(id)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 coordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a2 lastValidatedDate:(id)a3;

@end
