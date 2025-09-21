@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {
    char _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSString *_language;
    NSString *_country;
    char _languageHighConfidence;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (void).cxx_destruct;

@end
