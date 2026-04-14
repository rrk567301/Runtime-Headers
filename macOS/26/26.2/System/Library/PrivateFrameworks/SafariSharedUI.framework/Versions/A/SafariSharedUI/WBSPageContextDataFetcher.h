@class NSUUID, WKWebView, NSDictionary;
@protocol WBSPageContextDataFetcherDelegate;

@interface WBSPageContextDataFetcher : NSObject

@property (retain, nonatomic) NSUUID *ownerUUID;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WBSPageContextDataFetcherDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *filteredSchemaData;

- (void).cxx_destruct;
- (void)clearExtractedSchemaData;
- (void)fetchSchemaDataForWebView:(id)a0;

@end
