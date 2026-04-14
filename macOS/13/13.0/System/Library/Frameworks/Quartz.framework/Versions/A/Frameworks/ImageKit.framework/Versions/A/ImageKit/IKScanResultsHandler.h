@class NSArray, NSTableView, NSMutableArray, NSWindow;

@interface IKScanResultsHandler : NSObject {
    NSWindow *_window;
    NSTableView *_tableView;
    NSMutableArray *_scanInfos;
}

@property BOOL hasScanResults;
@property (retain) NSArray *scanResultsTLO;

+ (id)sharedScannerResultsHandler;
+ (void)autoShowUI;

- (id)init;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)clear:(id)a0;
- (void)showUI;
- (void)doubleClick:(id)a0;
- (void)removeScanInfo:(id)a0;
- (void)hideUI;
- (void)redisplayScanInfo:(id)a0;
- (void)addScanInfo:(id)a0;
- (id)scanInfoForURL:(id)a0;

@end
