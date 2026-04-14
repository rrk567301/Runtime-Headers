@interface SwiftUI.AppKitTableCoordinator : SwiftUI.PlatformViewCoordinator <NSTableViewDelegate, NSTableViewDataSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ sortOrder;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ lastEnvironment;
    void /* unknown type, empty encoding */ acceptedDragTypes;
    void /* unknown type, empty encoding */ tableHeaderCache;
    void /* unknown type, empty encoding */ contextStorage;
    void /* unknown type, empty encoding */ preferenceBridge;
    void /* unknown type, empty encoding */ clientBackgroundColor;
    void /* unknown type, empty encoding */ headersVisibility;
    void /* unknown type, empty encoding */ headerBezelVisibility;
    void /* unknown type, empty encoding */ defaultMinRowHeight;
    void /* unknown type, empty encoding */ updates;
    void /* unknown type, empty encoding */ isInitialUpdate;
    void /* unknown type, empty encoding */ isUpdatingSelection;
    void /* unknown type, empty encoding */ previousSelection;
    void /* unknown type, empty encoding */ typeSelectHosts;
}

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (id)tableView:(id)a0 pasteboardWriterForRow:(long long)a1;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 typeSelectStringForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)onDoubleAction:(id)a0;

@end
