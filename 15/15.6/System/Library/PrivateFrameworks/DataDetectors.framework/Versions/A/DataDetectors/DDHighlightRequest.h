@class NSString, NSArray;

@interface DDHighlightRequest : NSObject {
    char _webViewDisplayed;
}

@property (copy) NSString *webViewIdentifier;
@property (retain) NSArray *highlightObjects;
@property (retain) id webView;
@property char webViewDisplayed;

- (void).cxx_destruct;

@end
