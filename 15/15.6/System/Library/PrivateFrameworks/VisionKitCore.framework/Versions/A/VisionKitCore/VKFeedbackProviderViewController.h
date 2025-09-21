@class NSArray, NSMutableSet, NSWindow;
@protocol VKFeedbackProviderViewControllerDelegate;

@interface VKFeedbackProviderViewController : NSViewController {
    NSArray *_attachments;
    unsigned long long _options;
    NSMutableSet *_selectedAttachments;
    NSWindow *_window;
}

@property (weak) id<VKFeedbackProviderViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)present;
- (void)loadView;
- (void)viewDidLoad;
- (char)_canShowWhileLocked;
- (id)_contentRowButtonWithTitle:(id)a0 tag:(long long)a1 allowToggle:(char)a2;
- (void)_createContentView;
- (void)_toggleContentRowButton:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 attachments:(id)a1;

@end
