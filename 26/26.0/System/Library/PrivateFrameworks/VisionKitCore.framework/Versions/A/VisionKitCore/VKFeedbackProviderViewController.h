@class NSArray, NSMutableSet, NSWindow;
@protocol VKFeedbackProviderViewControllerDelegate;

@interface VKFeedbackProviderViewController : NSViewController {
    NSArray *_attachments;
    unsigned long long _options;
    NSMutableSet *_selectedAttachments;
    NSWindow *_window;
}

@property (weak) id<VKFeedbackProviderViewControllerDelegate> delegate;

- (void)present;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_contentRowButtonWithTitle:(id)a0 tag:(long long)a1 allowToggle:(BOOL)a2;
- (void)_createContentView;
- (void)_toggleContentRowButton:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 attachments:(id)a1;

@end
