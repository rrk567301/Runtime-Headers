@class LNSuccessResult;

@interface WFLinkSnippetActionDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, copy, nonatomic) LNSuccessResult *result;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithResult:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCancelled:(BOOL)a0;
- (id)initWithRequestedOpenURL:(id)a0;

@end
