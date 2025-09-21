@class NSImageView, NSString, NSArray, NSTextField, NSLayoutConstraint, NSStackView, WebBookmarkLeaf;
@protocol ActivityNoticeViewDelegate;

@interface BookmarkChangeActivityNoticeView : NSView <ActivityNoticeViewProtocol> {
    NSStackView *_containerStackView;
    NSLayoutConstraint *_containerLeadingConstraint;
    NSLayoutConstraint *_containerTrailingConstraint;
    NSTextField *_bookmarkFolderTitle;
}

@property (copy, nonatomic) NSString *folderTitle;
@property (retain, nonatomic) NSImageView *bookmarkIcon;
@property (retain, nonatomic) NSArray *suggestedFolders;
@property (retain, nonatomic) WebBookmarkLeaf *addedBookmark;
@property (readonly, nonatomic) unsigned long long dismissalMode;
@property (weak, nonatomic) id<ActivityNoticeViewDelegate> delegate;

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (id)initWithDestinationFolder:(id)a0;

@end
