@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)quit;
- (void)teardown;
- (void)setup;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (id)temporaryDirectoryPath;

@end
