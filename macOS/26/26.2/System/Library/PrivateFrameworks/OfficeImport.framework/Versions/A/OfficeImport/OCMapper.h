@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (BOOL)isCancelled;
- (void)cancel;
- (void)setup;
- (void)quit;
- (void)teardown;
- (void).cxx_destruct;
- (id)init;
- (id)temporaryDirectoryPath;

@end
