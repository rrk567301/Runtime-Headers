@class NSArray, NSString, NSTableView;

@interface NSDebugResponderChainViewController : NSViewController <NSDebugResponderChainUIDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    NSTableView *_tableView;
}

@property (copy) NSArray *displayedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (void)didUpdateResponderChainItems:(id)a0;
- (void)logDisplayedItemsToConsole:(id)a0;

@end
