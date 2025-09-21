@class WFTextFieldConfiguration, NSString, WFDialogButton;

@interface WFInputTextDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WFTextFieldConfiguration *textFieldConfiguration;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;
@property (readonly, copy, nonatomic) NSString *parameterKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMultilineTextEntry;
- (id)initWithTextFieldConfiguration:(id)a0 message:(id)a1 attribution:(id)a2 prompt:(id)a3 parameterKey:(id)a4;

@end
