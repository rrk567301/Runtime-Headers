@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CCRapportFileTransferManager : NSObject {
    NSMutableDictionary *_fileTransferSessions;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fileTransferQueue;
@property (readonly, nonatomic) NSURL *temporaryDirectoryURL;

- (id)init;
- (void).cxx_destruct;
- (id)buildFileTransferSessionWithTargetDeviceIdentifier:(id)a0;
- (void)closeAllFileTransferSessions;
- (void)closeFileTransferSessionWithDeviceIdentifier:(id)a0;
- (id)initiateFileTransferSesionBackToTargetDeviceWithIdentifier:(id)a0 withExchangedPeerPublicKey:(id)a1;

@end
