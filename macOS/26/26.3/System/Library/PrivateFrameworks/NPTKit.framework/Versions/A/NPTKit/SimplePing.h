@class NSData, NSString, NSObject;
@protocol OS_dispatch_source, SimplePingDelegate;

@interface SimplePing : NSObject <NSCopying>

@property (copy) NSData *hostAddress;
@property unsigned short nextSequenceNumber;
@property (nonatomic) BOOL nextSequenceNumberHasWrapped;
@property (retain, nonatomic) struct __CFHost { } *host;
@property (retain, nonatomic) struct __CFSocket { } *socket;
@property BOOL isInvalidated;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;
@property (readonly, copy) NSString *hostName;
@property (weak, nonatomic) id<SimplePingDelegate> delegate;
@property (nonatomic) long long addressStyle;
@property (readonly) unsigned char hostAddressFamily;
@property (readonly, nonatomic) unsigned short identifier;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)a0;

- (BOOL)validateSequenceNumber:(unsigned short)a0;
- (void)didFailWithError:(id)a0;
- (void)start;
- (void)stopHostResolution;
- (void)stopSocket;
- (void)stop;
- (BOOL)validatePing6ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)didFailWithHostStreamError:(struct { long long x0; int x1; })a0;
- (void)sendPingWithData:(id)a0;
- (BOOL)validatePingResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)readData;
- (void)hostResolutionDone;
- (void)timeOutHandler:(id)a0 sequenceNumber:(unsigned short)a1;
- (BOOL)validatePing4ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void).cxx_destruct;
- (void)packetDidFailToSendDelegate:(id)a0 error:(id)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHostName:(id)a0;
- (void)setupTimer:(id)a0 currentSequenceNumber:(unsigned short)a1;
- (id)pingPacketWithType:(unsigned char)a0 payload:(id)a1 requiresChecksum:(BOOL)a2;
- (void)startWithHostAddress;

@end
