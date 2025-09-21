@class NSArray, NSImageView, CalUILabel;

@interface TrailingIconsAndTextView : NSView {
    NSArray *_changingConstraints;
    char _attachmentHidden;
    char _repeatHidden;
    char _attendeeHidden;
}

@property (readonly, nonatomic) CalUILabel *textView;
@property (readonly, nonatomic) NSImageView *repeatView;
@property (readonly, nonatomic) NSImageView *attachmentView;
@property (readonly, nonatomic) NSImageView *attendeeView;

- (id)init;
- (void).cxx_destruct;
- (void)createAttachmentViewIfNeeded;
- (void)createAttendeeViewIfNeeded;
- (void)createRepeatViewIfNeeded;
- (void)setRepeatHidden:(char)a0 attachmentHidden:(char)a1 attendeeHidden:(char)a2;

@end
