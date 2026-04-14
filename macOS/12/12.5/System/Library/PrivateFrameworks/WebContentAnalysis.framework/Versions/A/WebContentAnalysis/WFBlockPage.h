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
- (id)_css;
- (id)_initWithUsername:(id)a0 fileName:(id)a1;
- (id)_initWithUsername:(id)a0 isWhitelistBlock:(BOOL)a1 isNetworkAccount:(BOOL)a2 isError:(BOOL)a3;
- (id)_fileContentWithName:(id)a0 extension:(id)a1;
- (id)_xssSafeStringFromString:(id)a0;
- (id)_blockpage;
- (id)_allowedWebSitesHTML;
- (id)_javascript;
- (id)initWithUsername:(id)a0 isWhitelistBlock:(BOOL)a1 isNetworkAccount:(BOOL)a2;
- (id)initNoOveridePageWithUsername:(id)a0;
- (id)initWithErrorPage;

@end
