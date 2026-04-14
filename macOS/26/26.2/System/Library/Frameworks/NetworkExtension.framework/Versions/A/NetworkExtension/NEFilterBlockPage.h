@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject {
    NSString *_organization;
    NSURL *_pageTemplateURL;
    NSString *_userURL;
    NSString *_formActionURL;
    NSString *_unblockStyle;
    NSString *_remediationButtonText;
}

- (void).cxx_destruct;
- (id)init;

@end
