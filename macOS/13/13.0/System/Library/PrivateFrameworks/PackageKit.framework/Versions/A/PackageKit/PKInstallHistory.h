@class NSString;

@interface PKInstallHistory : NSObject {
    NSString *_path;
}

+ (id)defaultHistory;
+ (id)historyOnVolume:(id)a0;

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)installedItems;
- (BOOL)addInstallRequest:(id)a0;
- (BOOL)recordInstall:(id)a0;
- (BOOL)recordInstall:(id)a0 returningError:(id *)a1;
- (BOOL)_openInstallHistoryWithItems:(id)a0 returningError:(id *)a1;

@end
