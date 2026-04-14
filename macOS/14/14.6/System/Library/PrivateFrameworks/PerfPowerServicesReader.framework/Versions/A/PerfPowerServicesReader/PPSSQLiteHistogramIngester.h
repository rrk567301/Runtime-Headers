@class NSURL;

@interface PPSSQLiteHistogramIngester : NSObject <PPSDataIngesterProtocol>

@property BOOL shouldUseCache;
@property (readonly) NSURL *filepath;

- (void).cxx_destruct;
- (id)initWithFilepath:(id)a0;
- (id)_convertSQLiteDataFromQuery:(id)a0 withDimensions:(id)a1 outError:(id *)a2;
- (id)parseDataForRequest:(id)a0 outError:(id *)a1;

@end
