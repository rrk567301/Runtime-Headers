@class AVCustomDeviceRoute;

@interface AVCustomRoutingEvent : NSObject {
    AVCustomDeviceRoute *_route;
}

@property (nonatomic) long long reason;
@property (nonatomic) AVCustomDeviceRoute *route;
@property (nonatomic) BOOL succeeded;

- (id)description;
- (id)init;
- (void)dealloc;

@end
