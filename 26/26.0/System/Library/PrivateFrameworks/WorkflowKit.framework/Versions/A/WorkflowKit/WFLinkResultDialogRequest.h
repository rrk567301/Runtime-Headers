@class LNSuccessResult, WFDialogButton;
@protocol LNDialogResult;

@interface WFLinkResultDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNSuccessResult *result;
@property (retain, nonatomic) id<LNDialogResult> catResult;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)getCATResultWithCompletionHandler:(id /* block */)a0;
- (id)initWithSuccessResult:(id)a0 attribution:(id)a1 encodedSnippetActionToolInvocation:(id)a2;

@end
