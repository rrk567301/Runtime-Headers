@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isCancelled;
- (void)quit;
- (void)setup;
- (void)teardown;
- (id)temporaryDirectoryPath;

@end
