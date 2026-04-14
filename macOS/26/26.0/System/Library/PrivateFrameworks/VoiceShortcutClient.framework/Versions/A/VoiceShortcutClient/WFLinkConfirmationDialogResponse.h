@class LNValue;

@interface WFLinkConfirmationDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, nonatomic) unsigned long long requestResponseCode;
@property (readonly, nonatomic) LNValue *value;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfirmationResponseCode:(unsigned long long)a0;
- (id)initWithConfirmationResponseCode:(unsigned long long)a0 value:(id)a1;
- (id)initWithRequestedOpenURL:(id)a0;
- (BOOL)shouldDismissDialogInTransientMode;

@end
