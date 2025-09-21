@interface IMRemoteIntentFileDownloadObserver : NSObject {
    void /* unknown type, empty encoding */ stateQueue;
}

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (char)isDownloadingTransferGUID:(id)a0;

@end
