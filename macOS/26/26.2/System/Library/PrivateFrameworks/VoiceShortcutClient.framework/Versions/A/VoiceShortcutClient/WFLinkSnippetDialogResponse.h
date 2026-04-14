@class NSURL;

@interface WFLinkSnippetDialogResponse : WFDialogResponse

@property (readonly, nonatomic) unsigned long long snippetResponseCode;
@property (copy, nonatomic) NSURL *requestedOpenURL;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCancelled:(BOOL)a0;
- (id)initWithRequestedOpenURL:(id)a0;
- (id)initWithResponseCode:(long long)a0;

@end
