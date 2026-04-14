@class NSString, NSTextField;

@interface AMPModalFooterLockup : AMPBindableView

@property (retain, nonatomic) NSTextField *detailTextField;
@property (copy, nonatomic) NSString *detailText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)commonSetup;
- (id)initWithDetailText:(id)a0;
- (id)propertyKeysForViewSpy;

@end
