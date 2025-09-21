@interface NetworkUtils : NSObject

+ (int)connectedSocketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (char)createAndStartListener:(id *)a0 withParameters:(id)a1;
+ (char)createNWPathEvaluator:(id *)a0 withIPAddress:(id)a1 localPort:(int *)a2 remotePort:(int)a3 shouldRunInProcess:(char)a4 useBackingSocket:(char)a5;
+ (id)encryptionInfoForKey:(unsigned long long)a0;
+ (id)networkEmulationSettings:(id)a0;
+ (id)networkEmulationSettings:(id)a0 onUplink:(char)a1;
+ (id)newEncryptionInfoWithMediaKeyIndex:(id)a0 participantID:(id)a1;
+ (id)newNWConnectionWithIPAddress:(id)a0 srcPort:(short)a1;
+ (id)newRTPSocketDictionary:(char)a0 rtpSourcePort:(short)a1;
+ (int)nonConnectedSocketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (id)securityKeyMaterialWithMediaKeyIndex:(id)a0;
+ (id)securityKeyMaterialWithMediaKeyIndex:(id)a0 participantID:(id)a1;
+ (void)setUniquePIDOnParameters:(id)a0 shouldRunInProcess:(char)a1;
+ (int)socketWithIPAddress:(id)a0 srcPort:(short)a1 error:(id *)a2;
+ (int)socketWithIPAddress:(id)a0 srcPort:(short)a1 shouldConnect:(char)a2 error:(id *)a3;

@end
