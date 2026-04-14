@class NSURL, NSString, NSArray;

@interface WFBlockPage : NSObject {
    BOOL isNetworkAccount;
    NSString *preferredLanguage;
}

@property (readonly) NSURL *pageTemplateURL;
@property (readonly) BOOL isWhitelistBlock;
@property (retain) NSString *userVisibleURLString;
@property (retain) NSString *formPostToURLString;
@property (retain) NSString *formRestrictedPageURLString;
@property (retain) NSString *formRestrictedPageTitle;
@property (retain) NSArray *allowedWebSites;

- (void)dealloc;
- (id)page;
- (id)_initWithUsername:(id)a0 fileName:(id)a1;
- (id)_initWithUsername:(id)a0 isWhitelistBlock:(BOOL)a1 isNetworkAccount:(BOOL)a2 isError:(BOOL)a3;
- (id)initWithUsername:(id)a0 isWhitelistBlock:(BOOL)a1 isNetworkAccount:(BOOL)a2;
- (id)initNoOveridePageWithUsername:(id)a0;
- (id)initWithErrorPage;
- (id)_blockpage;
- (id)_fileContentWithName:(id)a0 extension:(id)a1;
- (id)_css;
- (id)_javascript;
- (id)_xssSafeStringFromString:(id)a0;
- (id)_allowedWebSitesHTML;

@end
