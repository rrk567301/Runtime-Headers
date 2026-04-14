@class LNSuccessResult, CATResult, WFDialogButton;

@interface WFLinkResultDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNSuccessResult *result;
@property (retain, nonatomic) CATResult *catResult;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuccessResult:(id)a0 attribution:(id)a1;
- (void)getCATResultWithCompletionHandler:(id /* block */)a0;

@end
