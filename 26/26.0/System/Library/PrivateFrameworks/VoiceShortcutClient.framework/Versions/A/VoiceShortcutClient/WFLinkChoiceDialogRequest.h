@class NSString, NSArray, LNChoiceRequest;

@interface WFLinkChoiceDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNChoiceRequest *request;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *buttons;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 title:(id)a1 attribution:(id)a2;

@end
