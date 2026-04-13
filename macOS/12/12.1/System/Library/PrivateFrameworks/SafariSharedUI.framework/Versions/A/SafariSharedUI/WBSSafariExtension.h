@class NSString, NSArray, NSURL, WKWebsiteDataStore;

@interface WBSSafariExtension : NSObject

@property (retain, nonatomic) NSURL *safariExtensionBaseURI;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (nonatomic) struct RetainPtr<const __SecCode *> { void *m_ptr; } bundleCodeRef;
@property (copy, nonatomic) NSArray *injectedScripts;
@property (copy, nonatomic) NSArray *injectedStyleSheets;
@property (readonly, copy, nonatomic) WKWebsiteDataStore *defaultWebsiteDataStore;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithExtension:(id)a0;

@end
