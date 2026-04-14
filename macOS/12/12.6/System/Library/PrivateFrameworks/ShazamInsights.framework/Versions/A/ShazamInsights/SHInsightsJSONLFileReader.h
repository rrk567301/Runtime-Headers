@protocol SHInsightsJSONLDataDetokenizerDelegate;

@interface SHInsightsJSONLFileReader : NSObject

@property (weak) id<SHInsightsJSONLDataDetokenizerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)loadDataFromURL:(id)a0 error:(id *)a1;

@end
