@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {
    NSData *_placeData;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

@property (nonatomic) char isCurrentLocation;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)_initWithPlaceData:(id)a0 extSessionGuid:(id)a1 extSessionGuidCreatedTimestamp:(id)a2;
- (id)mapPointData;

@end
