@class NSString;

@interface RTNavigationManagerRouteSummaryNotification : RTNotification

@property (nonatomic) double originLatitude;
@property (nonatomic) double originLongitude;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) double destinationLatitude;
@property (nonatomic) double destinationLongitude;
@property (readonly, nonatomic) unsigned long long transportType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRouteSummary:(id)a0;

@end
