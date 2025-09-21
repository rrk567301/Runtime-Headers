@class NSString, NSDictionary, WFDialogButton;

@interface WFAskParameterDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *parameterKey;
@property (readonly, copy, nonatomic) NSDictionary *serializedParameterStates;
@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;
@property (readonly, nonatomic) BOOL focusImmediatelyWhenPresented;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 parameterKey:(id)a1 serializedParameterStates:(id)a2 style:(long long)a3 attribution:(id)a4 prompt:(id)a5 doneButton:(id)a6 focusImmediatelyWhenPresented:(BOOL)a7;
- (id)initWithActionIdentifier:(id)a0 parameterKey:(id)a1 serializedParameterStates:(id)a2 style:(long long)a3 attribution:(id)a4 prompt:(id)a5 focusImmediatelyWhenPresented:(BOOL)a6;
- (id)requestBySettingFocusImmediatelyWhenPresented:(BOOL)a0;

@end
