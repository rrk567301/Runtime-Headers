@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (char)isCancelled;
- (void)teardown;
- (void)quit;
- (void)setup;
- (id)temporaryDirectoryPath;

@end
