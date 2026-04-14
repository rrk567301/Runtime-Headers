@class WFDialogButton, NSString, WFParameterKeyValuePair, LNConfirmationSystemStyle;

@interface WFLinkConfirmationDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) WFDialogButton *yesButton;
@property (readonly, copy, nonatomic) WFDialogButton *noButton;
@property (readonly, nonatomic) WFParameterKeyValuePair *parameterInfo;
@property (readonly, nonatomic) BOOL isDestructive;
@property (nonatomic) BOOL isContinueInAppRequest;
@property (readonly, nonatomic) LNConfirmationSystemStyle *systemStyle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionMetadata:(id)a0 showPrompt:(BOOL)a1 dialogString:(id)a2 viewSnippet:(id)a3 snippetAction:(id)a4 encodedSnippetActionToolInvocation:(id)a5 yesText:(id)a6 noText:(id)a7 attribution:(id)a8 parameterInfo:(id)a9 isContinueInAppRequest:(BOOL)a10 systemStyle:(id)a11 destructive:(BOOL)a12;
- (id)initWithActionParameterMetadata:(id)a0 dialogString:(id)a1 viewSnippet:(id)a2 snippetAction:(id)a3 encodedSnippetActionToolInvocation:(id)a4 attribution:(id)a5 parameterInfo:(id)a6;
- (id)initWithTitle:(id)a0 viewSnippet:(id)a1 snippetAction:(id)a2 encodedSnippetActionToolInvocation:(id)a3 yesText:(id)a4 noText:(id)a5 attribution:(id)a6 parameterInfo:(id)a7 isContinueInAppRequest:(BOOL)a8 systemStyle:(id)a9 showPrompt:(BOOL)a10 destructive:(BOOL)a11;

@end
