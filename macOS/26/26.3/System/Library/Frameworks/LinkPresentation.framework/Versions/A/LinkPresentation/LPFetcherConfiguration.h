@class LPEvent, WKWebView;

@interface LPFetcherConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) WKWebView *webViewForProcessSharing;
@property (nonatomic) BOOL loadingIsNonAppInitiated;
@property (nonatomic) long long maximumResponseCount;
@property (retain, nonatomic) LPEvent *rootEvent;
@property (nonatomic) BOOL fetchIsNotUserInitiated;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
