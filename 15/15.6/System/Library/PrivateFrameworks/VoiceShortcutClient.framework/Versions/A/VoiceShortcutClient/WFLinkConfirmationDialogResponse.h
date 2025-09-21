@interface WFLinkConfirmationDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, nonatomic) unsigned long long requestResponseCode;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithConfirmationResponseCode:(unsigned long long)a0;
- (id)initWithRequestedOpenURL:(id)a0;
- (char)shouldDismissDialogInTransientMode;

@end
