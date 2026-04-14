@class NSString, NSNumber, NSArray;

@interface MXRoutingContextModificationMetrics : NSObject

@property (retain, nonatomic) NSString *figEndpointType;
@property (readonly, retain, nonatomic) NSString *correlationID;
@property (retain) NSNumber *clientModificationStartedTimestamp;
@property (retain) NSNumber *clientModificationFinishedTimestamp;
@property (retain) NSNumber *serverModificationStartedTimestamp;
@property (retain) NSNumber *serverModificationFinishedTimestamp;
@property (retain) NSArray *previousRouteDescriptors;
@property (retain) NSArray *currentRouteDescriptors;
@property (retain) NSNumber *routeChangeFailed;
@property (retain) NSNumber *didRequireAuthorization;
@property (retain) NSNumber *numberOfEndpoints;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)RTCDictionary;
- (id)getClusterTypeNumber:(id)a0;
- (id)initWithCorrelationID:(id)a0;

@end
