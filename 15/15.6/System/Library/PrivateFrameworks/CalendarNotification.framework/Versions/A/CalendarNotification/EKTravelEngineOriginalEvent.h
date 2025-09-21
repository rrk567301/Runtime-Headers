@class NSString, NSData, CLLocation, NSDate;

@interface EKTravelEngineOriginalEvent : NSObject

@property (retain, nonatomic) NSString *eventExternalURL;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int transportTypeOverride;
@property (retain, nonatomic) NSString *locationString;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *locationMapKitHandle;
@property (nonatomic) char locationIsAConferenceRoom;
@property (nonatomic) char automaticGeocodingAllowed;

- (id)description;
- (void).cxx_destruct;
- (char)isEqualToOriginalEvent:(id)a0;

@end
