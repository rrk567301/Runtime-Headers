@interface CRKConcreteNetworkPrimitives : NSObject <CRKNetworkPrimitives>

+ (id)makePathMonitorForInterfaceType:(int)a0;

- (id)wifiNetworkPathMonitor;
- (id)ethernetNetworkPathMonitor;

@end
