@class NSString;

@interface MRAVOutputDeviceSourceInfo : NSObject

@property (readonly, nonatomic) NSString *routingContextUID;
@property (readonly, nonatomic) BOOL multipleBuiltInDevices;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRoutingContextUID:(id)a0 multipleBuiltInDevices:(BOOL)a1;

@end
