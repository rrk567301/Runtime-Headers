@class NSImageView, NSString, NSArray, NSTextField, NSLayoutConstraint, NSStackView, WebBookmarkLeaf;
@protocol ActivityNoticeViewDelegate;

@interface BookmarkChangeActivityNoticeView : NSGlassEffectView <ActivityNoticeViewProtocol> {
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

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithDestinationFolder:(id)a0;

@end
