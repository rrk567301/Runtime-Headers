@class RPFileTransferSession, NSData, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface W5FileTransferManager : NSObject {
    RPFileTransferSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_tempDirPath;
}

@property (readonly, nonatomic) NSData *publicKeySelf;

- (id)init;
- (void).cxx_destruct;
- (void)_stop;
- (void)initializeReceiverWithTargetID:(id)a0;
- (void)_setupWithTargetID:(id)a0;
- (void)initializeSenderWithTargetID:(id)a0 peerPublicKey:(id)a1;
- (void)startW5FileReceiverWithPeerPublicKey:(id)a0 reply:(id /* block */)a1;
- (void)startW5FileSenderForFile:(id)a0;

@end
