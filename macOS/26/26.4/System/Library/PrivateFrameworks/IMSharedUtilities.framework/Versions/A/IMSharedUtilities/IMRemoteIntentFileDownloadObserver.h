@interface IMRemoteIntentFileDownloadObserver : NSObject {
    void /* unknown type, empty encoding */ stateQueue;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isDownloadingTransferGUID:(id)a0;

@end
