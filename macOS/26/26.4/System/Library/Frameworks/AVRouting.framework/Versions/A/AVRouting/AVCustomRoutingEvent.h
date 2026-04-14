@class AVCustomDeviceRoute;

@interface AVCustomRoutingEvent : NSObject {
    AVCustomDeviceRoute *_route;
}

@property (nonatomic) long long reason;
@property (nonatomic) AVCustomDeviceRoute *route;
@property (nonatomic) BOOL succeeded;

- (id)init;
- (id)description;
- (void)dealloc;

@end
