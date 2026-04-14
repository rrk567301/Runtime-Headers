@class NSScrollView, NSString, NSTextView, NSLayoutConstraint;

@interface LUI2MessageViewController : LUI2ViewController <NSTextStorageDelegate>

@property (class, readonly) double centerXPadding;

@property (retain) NSScrollView *scrollView;
@property NSLayoutConstraint *messageTextViewHeightConstraint;
@property (readonly) NSTextView *messageTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
