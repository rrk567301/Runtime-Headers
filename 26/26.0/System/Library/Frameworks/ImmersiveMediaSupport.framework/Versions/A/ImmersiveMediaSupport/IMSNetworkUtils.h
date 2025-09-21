@interface IMSNetworkUtils : NSObject

+ (id)localIPAddress;
+ (int)connectedSocketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (BOOL)createAndStartListener:(id *)a0 withParameters:(id)a1;
+ (int)socketWithIPAddress:(id)a0 srcPort:(short)a1 shouldConnect:(BOOL)a2 error:(id *)a3;
+ (int)socketWithIpAddress:(id)a0 port:(short)a1 error:(id *)a2;
+ (id)createPathEvaluatorForRemoteEndpointClientIDWithIPAddress:(id)a0 localPort:(int *)a1 remoteIPAddress:(id)a2 remotePort:(int)a3;
+ (id)createSocketDictionaryWithIpAddress:(id)a0 port:(unsigned short)a1 error:(id *)a2;
+ (id)getIPAddressUsingPreferredInterface:(id)a0;
+ (id)getInterfaceNameForIPAddress:(id)a0;
+ (int)localAvailablePort;
+ (id)localIPAddressUsingPreferredInterface:(id)a0;
+ (id)networkError:(int)a0 detailedCode:(long long)a1 filePath:(id)a2 description:(id)a3;
+ (id)newEndpointWith:(id)a0 srcPort:(unsigned short)a1;

@end
