@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (BOOL)isCancelled;
- (void)setup;
- (void)cancel;
- (void)quit;
- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (id)temporaryDirectoryPath;

@end
