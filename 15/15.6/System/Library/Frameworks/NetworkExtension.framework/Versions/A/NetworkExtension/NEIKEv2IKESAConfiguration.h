@class NSString, NWAddressEndpoint, NSArray, NWEndpoint, NSSet;

@interface NEIKEv2IKESAConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NSArray *_proposals;
}

@property (retain) NWEndpoint *localEndpoint;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSString *outgoingInterfaceName;
@property char randomizeLocalPort;
@property char serverMode;
@property char allowRedirect;
@property char disableSwitchToNATTPorts;
@property char allowTCPEncapsulation;
@property char useTLSForTCPEncapsulation;
@property char forceUDPEncapsulation;
@property char preferInitiatorProposalOrder;
@property unsigned short tcpEncapsulationPort;
@property unsigned int nonceSize;
@property char strictNonceSizeChecks;
@property (retain) NWAddressEndpoint *redirectedFromServer;
@property (copy, nonatomic) NSArray *proposals;
@property (retain) NSArray *customIKESAInitPayloads;
@property (retain) NSArray *customIKESAInitVendorPayloads;
@property unsigned int maximumPacketSize;
@property unsigned int headerOverhead;
@property char requestChildlessSA;
@property char requestPPK;
@property (retain) NSSet *extraSupportedSignatureHashes;
@property (retain) NSSet *supportedSecurePasswordMethods;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
