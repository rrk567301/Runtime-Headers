@class NSString, CLSilo;

@interface CLSiloHeartbeatRecord : NSObject

@property (readonly, nonatomic) CLSilo *silo;
@property (readonly, nonatomic) Class svcClass;
@property (readonly) NSString *svcName;
@property (nonatomic) int residentCount;
@property (readonly, nonatomic) int synCount;
@property (readonly, nonatomic) int ackCount;

- (void).cxx_destruct;
- (id)initTrackingServiceClass:(Class)a0 name:(id)a1;
- (void)syn;
- (void)ack;

@end
