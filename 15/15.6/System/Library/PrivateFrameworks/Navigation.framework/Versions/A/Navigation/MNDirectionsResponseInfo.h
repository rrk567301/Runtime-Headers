@class NSArray, GEODirectionsRequest, GEODirectionsError, NSError, GEODirectionsResponse, MNTraceRecordingData;

@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *routeInfos;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) GEODirectionsError *directionsError;
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
