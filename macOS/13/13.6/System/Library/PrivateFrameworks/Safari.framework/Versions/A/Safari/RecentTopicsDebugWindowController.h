@class NSString, WBSRecentHistoryTopicTagController, NSArray, NSTableView, NSDateFormatter;

@interface RecentTopicsDebugWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate> {
    WBSRecentHistoryTopicTagController *_controller;
    NSArray *_topics;
    NSDateFormatter *_dateFormatter;
}

@property (weak, nonatomic) NSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_historyContextControllerDidAddTag:(id)a0;
- (void)_reloadTopics;

@end
