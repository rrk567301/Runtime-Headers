@class NSData, NSString, B2PIdentificationResponse, ThunderboltInterface, B2PEngine, ThunderboltPacketDumper, NSObject, B2PResponse;
@protocol OS_os_log, OS_dispatch_semaphore, OS_dispatch_queue, AppleTypeCRetimerDFUDelegate;

@interface AppleTypeCRetimerDFU : NSObject {
    ThunderboltInterface *_tbtInterface;
    unsigned int _dfuBaseAddress;
    NSObject<OS_os_log> *_log;
    unsigned long long _route;
    unsigned int _port;
    unsigned int _space;
    unsigned int _baudRate;
    B2PEngine *_b2p;
    char _b2pCommandInFlight;
    unsigned short _b2pOpCodeInFlight;
    NSObject<OS_dispatch_queue> *_b2pQueue;
    NSObject<OS_dispatch_semaphore> *_b2pSemaphore;
    B2PResponse *_b2pResponse;
    B2PIdentificationResponse *_idResponse;
    char _b2pReset;
    NSData *_manifestData;
    ThunderboltPacketDumper *_dumper;
}

@property (readonly) NSString *aceInfo;
@property (weak) id<AppleTypeCRetimerDFUDelegate> delegate;
@property unsigned int maxB2PFrameSize;
@property (readonly) unsigned long long bytesSent;
@property (readonly) unsigned long long bytesReceived;

- (void).cxx_destruct;
- (id)queue;
- (char)writeData:(id)a0;
- (id)readData;
- (char)sendData:(id)a0;
- (void)receivedResponse:(id)a0;
- (char)receivedCommand:(id)a0;
- (char)b2pDataSessionOpenForSessionID:(unsigned char)a0;
- (char)dfuBoot;
- (char)findBaseAddress;
- (id)sendPingCommand;
- (id)queryHardwareID;
- (void)b2pReset:(int)a0;
- (unsigned int)bytesAvailableToRead;
- (char)configReadForIndex:(unsigned int)a0 result:(unsigned int *)a1;
- (char)configReadMetadata:(unsigned int *)a0 opCode:(unsigned short)a1;
- (char)configWriteForIndex:(unsigned int)a0 value:(unsigned int)a1;
- (char)configWriteMetadata:(unsigned int)a0 opCode:(unsigned short)a1;
- (unsigned int)convertBytesToDword:(const char *)a0 length:(unsigned int)a1;
- (void)convertBytesToDwords:(const char *)a0 length:(unsigned int)a1 dWordBuffer:(unsigned int *)a2;
- (id)convertDWordsToData:(unsigned int *)a0 bytes:(unsigned int)a1;
- (id)convertDwordToData:(unsigned int)a0 bytes:(unsigned int)a1;
- (void)dataTransferUpdateForBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1 sessionID:(unsigned char)a2;
- (char)dfuValidate;
- (char)dfuWithFTAB:(id)a0 forcePersonalize:(char)a1;
- (char)enableUART;
- (id)initWithRouterID:(unsigned char)a0 route:(unsigned long long)a1 port:(unsigned int)a2 space:(unsigned int)a3 baudRate:(unsigned int)a4;
- (char)performRouterOperationWithOpCode:(unsigned short)a0 metadata:(unsigned int *)a1 dWordBuffer:(unsigned int *)a2 dWordCount:(unsigned int)a3 returnStatus:(unsigned int *)a4;
- (char)pingChip;
- (void)pollForB2PResponseForCommand:(id)a0;
- (char)queryChipIdentification;
- (char)queryManifestForFTAB:(id)a0;
- (unsigned int)registerIndexForVendorIndex:(unsigned int)a0;
- (char)registerReadForVendorIndex:(unsigned int)a0 result:(unsigned int *)a1;
- (char)registerWriteForVendorIndex:(unsigned int)a0 value:(unsigned int)a1;
- (id)sendB2PCommand:(id)a0 responseClass:(Class)a1;
- (char)sendDFUImage:(const char *)a0 length:(unsigned int)a1;
- (id)sendDataSessionConnectCommandForSessionID:(unsigned char)a0 state:(int)a1;
- (id)sendDataSessionDataCommandForSessionID:(unsigned char)a0 status:(int)a1 data:(id)a2;
- (id)sendIdentificationCommand;
- (char)sendManifest;
- (char)startPacketDumperWithFileName:(id)a0 productID:(unsigned short)a1;
- (char)transferDataBuffer:(const char *)a0 length:(unsigned int)a1 sessionID:(unsigned char)a2;
- (char)verifyRouterIsNotEnumerated;
- (char)waitForCurrentRouterOperationToComplete:(unsigned int *)a0;

@end
