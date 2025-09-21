@class AVConferenceXPCClient, NSString, NSDictionary, AVCMediaStreamConfig, VCVideoStream, NSObject;
@protocol OS_dispatch_queue;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {
    AVConferenceXPCClient *_connection;
    VCVideoStream *_opaqueStream;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    char _shouldUseXPC;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCMediaStreamConfig *configuration;
@property (nonatomic) long long direction;
@property (nonatomic, getter=isRTCPEnabled) char rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) char rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) char rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capabilities;
+ (id)extractClientDownlinkQualityInfoDictionary:(id)a0;
+ (id)extractClientUplinkQualityInfoDictionary:(id)a0;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)start;
- (void)stop;
- (char)configure:(id)a0 error:(id *)a1;
- (id)initWithNetworkSockets:(id)a0 callID:(id)a1 error:(id *)a2;
- (void)terminateSession;
- (void)deregisterBlocksForDelegateNotifications;
- (id)getStats;
- (id)initWithIDSDestination:(id)a0 callID:(id)a1 error:(id *)a2;
- (id)initWithIDSDestination:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithLocalAddress:(id)a0 networkSockets:(id)a1 IDSDestination:(id)a2 connectionClientID:(id)a3 callID:(id)a4 options:(id)a5 error:(id *)a6;
- (id)initWithNWConnectionClientID:(unsigned char[16])a0 options:(id)a1 error:(id *)a2;
- (id)initWithNetworkSockets:(id)a0 options:(id)a1 error:(id *)a2;
- (void)refreshLoggingParameters;
- (void)registerBlocksForDelegateNotifications;
- (void)requestLastDecodedFrame;
- (void)updateVideoConfiguration:(id)a0;
- (void)vcMediaStream:(id)a0 didPauseStream:(char)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)vcMediaStream:(id)a0 didResumeStream:(char)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didStartStream:(char)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didUpdateVideoConfiguration:(char)a1 error:(id)a2 dictionary:(id)a3;
- (void)vcMediaStream:(id)a0 downlinkQualityDidChange:(id)a1;
- (void)vcMediaStream:(id)a0 uplinkQualityDidChange:(id)a1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)a0;
- (void)vcMediaStreamDidRTPTimeOut:(id)a0;
- (void)vcMediaStreamDidStop:(id)a0;
- (void)vcMediaStreamServerDidDie:(id)a0;

@end
