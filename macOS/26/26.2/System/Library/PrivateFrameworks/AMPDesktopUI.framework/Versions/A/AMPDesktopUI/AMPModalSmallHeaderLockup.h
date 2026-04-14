@class NSString, NSTextField;

@interface AMPModalSmallHeaderLockup : AMPBindableView

@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSTextField *detailTextField;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 detailText:(id)a1;
- (void)commonSetup;
- (id)propertyKeysForViewSpy;

@end
