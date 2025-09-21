@class NSString;

@interface IDSStunCandidate : NSObject {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _address;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _external;
    struct { int length; unsigned char data[12]; } _prefix;
}

@property (nonatomic) char active;
@property (nonatomic) char isCLAT46;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) long long transport;
@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *address;
@property (nonatomic) struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *external;
@property (nonatomic) struct { int x0; unsigned char x1[12]; } *prefix;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mtu;
@property (nonatomic) double extIPDetectionStartTime;
@property (nonatomic) unsigned short linkFlags;
@property (nonatomic) unsigned char cellularSlicingFlags;
@property (nonatomic) unsigned int dataSoMask;
@property (copy, nonatomic) NSString *allocbindDataBlob;
@property (copy, nonatomic) NSString *serverSoftwareVersion;
@property (readonly) NSString *addressString;
@property (readonly) NSString *externalAddressString;

+ (id)candidateWithType:(unsigned long long)a0 transport:(long long)a1 radioAccessTechnology:(unsigned int)a2 mtu:(unsigned int)a3 index:(int)a4 address:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a5 external:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a6;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)hasNATIPv4Address;
- (char)hasNATIPv4External;
- (id)initWithType:(unsigned long long)a0 transport:(long long)a1 radioAccessTechnology:(unsigned int)a2 mtu:(unsigned int)a3 index:(int)a4 address:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a5 external:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a6;
- (char)isCellularStunCandidate;
- (char)isCompatibleWithStunCandidate:(id)a0;
- (char)isLinkLocalStunCandidate;
- (char)isRelayStunCandidate;
- (char)isSameNetworkType:(id)a0;
- (char)isServerReflexiveStunCandidate;
- (void)setAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 external:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;
- (void)setExternalAddress:(id)a0;
- (void)setLocalPort:(unsigned short)a0;
- (void)updateTransport:(long long)a0;

@end
