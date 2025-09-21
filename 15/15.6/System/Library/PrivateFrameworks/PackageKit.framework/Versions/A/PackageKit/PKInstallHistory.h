@class NSString;

@interface PKInstallHistory : NSObject {
    NSString *_path;
}

+ (id)defaultHistory;
+ (id)_errorWithCode:(long long)a0 posixErrno:(int)a1;
+ (id)historyOnVolume:(id)a0;

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)installedItems;
- (char)_openInstallHistoryWithItems:(id)a0 returningError:(id *)a1;
- (char)_renameInstallHistoryAtDir:(int)a0 fileName:(char *)a1 returningError:(out id *)a2;
- (char)addInstallRequest:(id)a0;
- (char)recordInstall:(id)a0;
- (char)recordInstall:(id)a0 returningError:(id *)a1;

@end
