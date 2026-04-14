@class NSString, NSArray, NSTableView, NSAlert;

@interface _WKSSOSiteList : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    struct RetainPtr<NSArray<NSString *>> { NSArray *m_ptr; } _siteList;
    struct RetainPtr<NSAlert> { NSAlert *m_ptr; } _alert;
    struct RetainPtr<NSTableView> { NSTableView *m_ptr; } _tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)initWithSiteList:(id)a0 withAlert:(struct RetainPtr<NSAlert> { id x0; })a1 withTableView:(struct RetainPtr<NSTableView> { id x0; })a2;
- (void)toggleTableViewContents:(id)a0;

@end
