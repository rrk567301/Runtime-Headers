@protocol SHJSONLDataDetokenizerDelegate;

@interface SHJSONLFileReader : NSObject

@property (weak) id<SHJSONLDataDetokenizerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)loadDataFromURL:(id)a0 algorithm:(int)a1 error:(id *)a2;
- (BOOL)loadDataFromURL:(id)a0 error:(id *)a1;

@end
