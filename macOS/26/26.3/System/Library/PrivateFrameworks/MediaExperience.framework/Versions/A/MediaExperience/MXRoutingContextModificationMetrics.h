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

- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)RTCDictionary;
- (id)initWithCorrelationID:(id)a0;

@end
