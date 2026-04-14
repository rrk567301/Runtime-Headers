@class NSString, NSArray;

@interface PXSharedLibraryLegacyDevicesFallbackViewController : PXAssistantTemplateViewController <NSTableViewDataSource, NSTableViewDelegate> {
    NSArray *_devices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)initWithDevices:(id)a0;
- (void)firstButtonAction:(id)a0;
- (void)thirdButtonAction:(id)a0;

@end
