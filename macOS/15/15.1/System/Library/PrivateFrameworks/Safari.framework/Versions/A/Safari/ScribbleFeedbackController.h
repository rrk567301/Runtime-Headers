@class BrowserViewController;

@interface ScribbleFeedbackController : FeedbackAlertController {
    BrowserViewController *_browserViewController;
}

- (void).cxx_destruct;
- (id)_messageText;
- (id)_informativeTextString;
- (id)_issueStrings;
- (id)_menuTitle;
- (void)_reportFeedback:(long long)a0;
- (id)initWithBrowserViewController:(id)a0;

@end
