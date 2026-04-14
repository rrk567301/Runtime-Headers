@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {
    BOOL _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)totalCount;
- (void)activateScanner:(id)a0;
- (unsigned long long)busyCount;
- (BOOL)cancelJob:(long long)a0;
- (id)dequeueJob;
- (void)enqueueJob:(id /* block */)a0 withIdentifier:(long long)a1;
- (id)getCachedScanner;
- (void)pushBackScanner:(id)a0;
- (id)scannerCreate;

@end
