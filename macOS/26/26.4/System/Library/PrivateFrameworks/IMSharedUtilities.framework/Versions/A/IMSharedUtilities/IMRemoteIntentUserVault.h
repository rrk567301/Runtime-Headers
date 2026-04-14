@class NSURL;

@interface IMRemoteIntentUserVault : NSObject {
    void /* unknown type, empty encoding */ commonPathsMap;
}

@property (nonatomic, readonly) NSURL *baseDirectory;

+ (id)sharedUserVault;

- (void).cxx_destruct;
- (id)init;
- (void)closeTransaction;
- (id)convertedCommonPathForDirectory:(id)a0;
- (id)convertedPathForRemoteFile:(id)a0;
- (void)openTransactionIfNecessary;

@end
