@class NSURL, NSString;

@interface NEFilterBlockPage : NSObject {
    NSString *_organization;
}

@property (readonly) NSURL *pageTemplateURL;
@property (copy) NSString *userURL;
@property (copy) NSString *formActionURL;
@property (copy) NSString *organization;
@property (copy) NSString *unblockStyle;
@property (copy) NSString *remediationButtonText;

- (id)init;
- (void).cxx_destruct;
- (id)page;
- (id)_blockPage;
- (id)_css;

@end
