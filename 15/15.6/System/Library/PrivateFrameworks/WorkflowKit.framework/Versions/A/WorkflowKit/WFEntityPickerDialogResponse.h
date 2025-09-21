@class NSString, WFConcreteRunnableEntry;

@interface WFEntityPickerDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFConcreteRunnableEntry *selectedEntry;
@property (readonly, nonatomic) char userRequestedAllOptions;
@property (readonly, nonatomic) char userRequestedOpenApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithSelectedEntry:(id)a0;

@end
