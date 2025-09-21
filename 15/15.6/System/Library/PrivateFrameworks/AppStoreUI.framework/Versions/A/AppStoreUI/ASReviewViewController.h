@class ASWriteReviewBodyView, NSString, ASWriteReviewConfiguration, NSAlert;

@interface ASReviewViewController : NSViewController <NSTextFieldDelegate, NSControlTextEditingDelegate>

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (readonly, nonatomic) ASWriteReviewBodyView *reviewView;
@property (retain, nonatomic) NSAlert *alert;
@property (readonly, nonatomic) char hasActiveRequest;
@property (nonatomic) char isReadyToPublish;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryStringForDictionary:(id)a0 escapedValues:(char)a1;
+ (struct CGSize { double x0; double x1; })preferredSizeForConfiguration:(id)a0;
+ (id)stringByEscapingString:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (char)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (void)updateControls;
- (void)configureDialogView:(id)a0;
- (void)loadReviewMetadata;
- (void)promptForNickNameWithMessage:(id)a0;
- (void)publishReview;
- (void)transitionToLoadingCompleteAndPublishIfNeeded;

@end
