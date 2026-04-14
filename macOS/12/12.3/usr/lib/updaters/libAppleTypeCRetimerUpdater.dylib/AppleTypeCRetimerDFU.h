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
    BOOL _b2pCommandInFlight;
    unsigned short _b2pOpCodeInFlight;
    NSObject<OS_dispatch_queue> *_b2pQueue;
    NSObject<OS_dispatch_semaphore> *_b2pSemaphore;
    B2PResponse *_b2pResponse;
    B2PIdentificationResponse *_idResponse;
    BOOL _b2pReset;
    NSData *_manifestData;
    ThunderboltPacketDumper *_dumper;
}

@property (readonly) NSString *aceInfo;
@property (weak) id<AppleTypeCRetimerDFUDelegate> delegate;
@property unsigned int maxB2PFrameSize;

- (void).cxx_destruct;
- (id)queue;
- (BOOL)writeData:(id)a0;
- (id)readData;
- (BOOL)sendData:(id)a0;
- (void)receivedResponse:(id)a0;
- (BOOL)receivedCommand:(id)a0;
- (unsigned int)registerIndexForVendorIndex:(unsigned int)a0;
- (BOOL)configReadForIndex:(unsigned int)a0 result:(unsigned int *)a1;
- (BOOL)configWriteForIndex:(unsigned int)a0 value:(unsigned int)a1;
- (BOOL)waitForCurrentRouterOperationToComplete:(unsigned int *)a0;
- (BOOL)configWriteMetadata:(unsigned int)a0 opCode:(unsigned short)a1;
- (BOOL)configReadMetadata:(unsigned int *)a0 opCode:(unsigned short)a1;
- (id)sendPingCommand;
- (id)sendIdentificationCommand;
- (void)dataTransferUpdateForBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1 sessionID:(unsigned char)a2;
- (id)sendDataSessionDataCommandForSessionID:(unsigned char)a0 status:(int)a1 data:(id)a2;
- (id)sendDataSessionConnectCommandForSessionID:(unsigned char)a0 state:(int)a1;
- (BOOL)b2pDataSessionOpenForSessionID:(unsigned char)a0;
- (BOOL)transferDataBuffer:(const char *)a0 length:(unsigned int)a1 sessionID:(unsigned char)a2;
- (id)sendB2PCommand:(id)a0 responseClass:(Class)a1;
- (BOOL)verifyRouterIsNotEnumerated;
- (BOOL)findBaseAddress;
- (BOOL)enableUART;
- (BOOL)pingChip;
- (BOOL)queryChipIdentification;
- (BOOL)queryManifestForFTAB:(id)a0;
- (BOOL)sendDFUImage:(const char *)a0 length:(unsigned int)a1;
- (BOOL)sendManifest;
- (BOOL)dfuValidate;
- (BOOL)dfuBoot;
- (BOOL)registerWriteForVendorIndex:(unsigned int)a0 value:(unsigned int)a1;
- (BOOL)registerReadForVendorIndex:(unsigned int)a0 result:(unsigned int *)a1;
- (unsigned int)convertBytesToDword:(const char *)a0 length:(unsigned int)a1;
- (void)convertBytesToDwords:(const char *)a0 length:(unsigned int)a1 dWordBuffer:(unsigned int *)a2;
- (BOOL)performRouterOperationWithOpCode:(unsigned short)a0 metadata:(unsigned int *)a1 dWordBuffer:(unsigned int *)a2 dWordCount:(unsigned int)a3 returnStatus:(unsigned int *)a4;
- (unsigned int)bytesAvailableToRead;
- (id)convertDWordsToData:(unsigned int *)a0 bytes:(unsigned int)a1;
- (id)convertDwordToData:(unsigned int)a0 bytes:(unsigned int)a1;
- (void)pollForB2PResponseForCommand:(id)a0;
- (id)initWithRouterID:(unsigned char)a0 route:(unsigned long long)a1 port:(unsigned int)a2 space:(unsigned int)a3 baudRate:(unsigned int)a4;
- (BOOL)dfuWithFTAB:(id)a0 forcePersonalize:(BOOL)a1;
- (void)b2pReset:(int)a0;
- (BOOL)startPacketDumperWithFileName:(id)a0 productID:(unsigned short)a1;
- (id)queryHardwareID;

@end
