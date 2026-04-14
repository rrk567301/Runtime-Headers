@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)cancel;
- (BOOL)isCancelled;
- (void)quit;
- (id)init;
- (void)setup;
- (void)teardown;
- (void).cxx_destruct;
- (id)temporaryDirectoryPath;

@end
