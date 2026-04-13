@class NSString, BrowserTabViewItem;

@interface TabSnapshotInformationVendor : NSObject <TabSnapshotVendingInformationProvider> {
    BrowserTabViewItem *_browserTabViewItem;
    long long _purpose;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)generateTabSnapshotWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldPersistSnapshot;
- (long long)decideSnapshotSource;
- (id)uniqueTabSnapshotKey;
- (id)initWithTabViewItem:(id)a0 purpose:(long long)a1;

@end
