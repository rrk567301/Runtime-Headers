@class GEORouteAttributes;

@interface _MNETAUpdateRequestParameters : NSObject

@property (nonatomic) unsigned long long reason;
@property (nonatomic) char shouldUseConditionalRequest;
@property (nonatomic) char shouldRepeatAfterCompletion;
@property (nonatomic) char shouldRetryImmediatelyOnError;
@property (nonatomic) char shouldTrackPendingRequest;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;

- (void).cxx_destruct;

@end
