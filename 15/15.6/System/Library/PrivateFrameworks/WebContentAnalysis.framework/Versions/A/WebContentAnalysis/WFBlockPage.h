@class NSURL, NSString, NSArray;

@interface WFBlockPage : NSObject {
    char isNetworkAccount;
    NSString *preferredLanguage;
}

@property (readonly) NSURL *pageTemplateURL;
@property (readonly) char isWhitelistBlock;
@property (retain) NSString *userVisibleURLString;
@property (retain) NSString *formPostToURLString;
@property (retain) NSString *formRestrictedPageURLString;
@property (retain) NSString *formRestrictedPageTitle;
@property (retain) NSArray *allowedWebSites;

- (void)dealloc;
- (id)page;
- (id)_fileContentWithName:(id)a0 extension:(id)a1;
- (id)_allowedWebSitesHTML;
- (id)_blockpage;
- (id)_css;
- (id)_initWithUsername:(id)a0 fileName:(id)a1;
- (id)_initWithUsername:(id)a0 isWhitelistBlock:(char)a1 isNetworkAccount:(char)a2 isError:(char)a3;
- (id)_javascript;
- (id)_xssSafeStringFromString:(id)a0;
- (id)initNoOveridePageWithUsername:(id)a0;
- (id)initWithErrorPage;
- (id)initWithUsername:(id)a0 isWhitelistBlock:(char)a1 isNetworkAccount:(char)a2;

@end
