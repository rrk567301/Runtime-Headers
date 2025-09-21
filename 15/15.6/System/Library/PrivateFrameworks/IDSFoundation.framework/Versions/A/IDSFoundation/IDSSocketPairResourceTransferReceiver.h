@class NSString, NSDictionary, NSData, NSDate;

@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessageProtocol> {
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    char _done;
    char _isResuming;
    char _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    char _expectsPeerResponse;
    char _wantsAppAck;
    char _compressed;
    NSString *_peerResponseIdentifier;
}

@property (readonly, nonatomic) unsigned long long totalBytesReceived;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) char wantsAppAck;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;

+ (id)incomingFilePathForMessageUUID:(id)a0;
+ (id)incomingFilePath;
+ (id)modernIncomingFilePath;

- (void)dealloc;
- (void).cxx_destruct;
- (void)abortTransfer;
- (char)appendMessage:(id)a0 receiverError:(unsigned char *)a1;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)a0 resumeResourceTransfers:(char)a1 receiverError:(unsigned char *)a2;
- (char)writeResourceData:(id)a0;
- (char)writeResourceData:(id)a0 resourceByteOffset:(unsigned long long)a1;

@end
