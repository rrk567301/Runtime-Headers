@class NSArray, NSString;
@protocol BookmarksTableCellViewDelegate;

@interface BookmarksTableCellView : NSTableCellView <NSControlTextEditingDelegate>

@property (weak, nonatomic) id<BookmarksTableCellViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *requestTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidEndEditing:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToWindow;
- (id)accessibilityRole;
- (void)setAccessibilityLabel:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformShowMenu;
- (void)cancelAllMetadataRequests;
- (void)cancelMetadataRequestForToken:(id)a0;
- (void)didRecognizeLongPress:(id)a0;
- (void)editTitle;

@end
