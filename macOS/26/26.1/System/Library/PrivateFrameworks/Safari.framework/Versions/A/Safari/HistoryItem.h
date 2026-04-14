@class NSString;

@interface HistoryItem : WBSHistoryItem {
    NSString *_titleTruncatedForMenu;
}

@property (readonly, nonatomic) NSString *titleTruncatedForMenu;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)_lastVisitTitleMayHaveChanged;
- (void)_wasVisitedOnSynchronizationQueue:(id)a0;
- (id)createDebugMenu;

@end
