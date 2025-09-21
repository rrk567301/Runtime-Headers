@class NSURL;

@interface WFLinkSnippetDialogResponse : WFDialogResponse

@property (readonly, nonatomic) unsigned long long snippetResponseCode;
@property (copy, nonatomic) NSURL *requestedOpenURL;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCancelled:(char)a0;
- (id)initWithRequestedOpenURL:(id)a0;
- (id)initWithResponseCode:(long long)a0;

@end
