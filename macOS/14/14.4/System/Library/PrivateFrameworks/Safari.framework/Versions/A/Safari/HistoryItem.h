@class NSString;

@interface HistoryItem : WBSHistoryItem {
    NSString *_titleTruncatedForMenu;
}

@property (readonly, nonatomic) NSString *titleTruncatedForMenu;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)_wasVisitedOnSynchronizationQueue:(id)a0;
- (id)createDebugMenu;

@end
