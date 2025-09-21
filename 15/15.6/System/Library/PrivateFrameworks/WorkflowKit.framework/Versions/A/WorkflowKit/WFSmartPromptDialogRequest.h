@class WFDialogButton, NSString, WFContentCollection, NSData, WFSmartPromptConfiguration;

@interface WFSmartPromptDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *archivedSourceContentCollection;
@property (retain, nonatomic) WFContentCollection *cachedSourceContentCollection;
@property (readonly, copy, nonatomic) WFSmartPromptConfiguration *configuration;
@property (readonly, copy, nonatomic) WFDialogButton *previewButton;
@property (readonly, copy, nonatomic) WFDialogButton *allowOnceButton;
@property (readonly, copy, nonatomic) WFDialogButton *allowAlwaysButton;
@property (readonly, copy, nonatomic) WFDialogButton *denyButton;
@property (readonly, copy, nonatomic) NSString *secondaryText;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)shouldCenterPrompt;
- (void)getContentCollectionWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 attribution:(id)a1;

@end
