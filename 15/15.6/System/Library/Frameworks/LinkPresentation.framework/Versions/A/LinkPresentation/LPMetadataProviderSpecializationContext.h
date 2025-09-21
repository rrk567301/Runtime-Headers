@class NSString, NSURL, WKWebView, LPEvent;

@interface LPMetadataProviderSpecializationContext : NSObject

@property (readonly, copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *postRedirectURL;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) char hasLoadedResource;
@property (readonly, nonatomic) char shouldFetchSubresources;
@property (readonly, nonatomic) char fetchIsNotUserInitiated;
@property (readonly, retain, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) unsigned long long allowedSpecializations;
@property (retain, nonatomic) LPEvent *event;
@property (copy, nonatomic) id /* block */ eventGenerator;

- (void).cxx_destruct;
- (void)ensureEventWithSpecialization:(unsigned long long)a0;
- (id)initWithOriginalURL:(id)a0 postRedirectURL:(id)a1 MIMEType:(id)a2 webView:(id)a3 hasLoadedResource:(char)a4 shouldFetchSubresources:(char)a5 allowedSpecializations:(unsigned long long)a6 fetchIsNotUserInitiated:(char)a7;

@end
