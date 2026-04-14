@interface IMRemoteIntentFilePersistenceManager : NSObject {
    void /* unknown type, empty encoding */ _manifest;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)touchFilePath:(id)a0 forGUID:(id)a1;
- (void)touchFilePaths:(id)a0 forGUID:(id)a1;

@end
