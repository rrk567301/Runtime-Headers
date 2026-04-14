@class NSString, NSTextField;

@interface AMPModalSmallHeaderLockup : AMPBindableView

@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSTextField *detailTextField;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonSetup;
- (id)initWithTitle:(id)a0 detailText:(id)a1;
- (id)propertyKeysForViewSpy;

@end
