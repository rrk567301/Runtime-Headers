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
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setAccessibilityLabel:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (BOOL)accessibilityPerformShowMenu;
- (void)cancelAllMetadataRequests;
- (void)cancelMetadataRequestForToken:(id)a0;
- (void)didRecognizeLongPress:(id)a0;
- (void)editTitle;

@end
