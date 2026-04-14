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
- (id)getCachedScanner;
- (BOOL)cancelJob:(long long)a0;
- (id)scannerCreate;
- (void)pushBackScanner:(id)a0;
- (void)enqueueJob:(id /* block */)a0 withIdentifier:(long long)a1;
- (id)dequeueJob;
- (unsigned long long)busyCount;

@end
