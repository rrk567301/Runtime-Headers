@class NSString;

@interface ODCServerComboBox : XSBonjourComboBox

@property (copy) NSString *dhcpServerName;

- (void)dealloc;
- (long long)numberOfItemsInComboBox:(id)a0;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;

@end
