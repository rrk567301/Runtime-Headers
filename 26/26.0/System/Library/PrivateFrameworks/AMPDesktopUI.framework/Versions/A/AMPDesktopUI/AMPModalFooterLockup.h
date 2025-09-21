@class NSString, NSTextField;

@interface AMPModalFooterLockup : AMPBindableView

@property (retain, nonatomic) NSTextField *detailTextField;
@property (copy, nonatomic) NSString *detailText;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)commonSetup;
- (id)initWithDetailText:(id)a0;
- (id)propertyKeysForViewSpy;

@end
