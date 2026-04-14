@class WBSCloudTab;

@interface CloudTabCompletionMatch : WBSTabCompletionMatch

@property (readonly, nonatomic) WBSCloudTab *cloudTab;

- (id)init;
- (void).cxx_destruct;
- (id)parsecDomainIdentifier;
- (id)initWithCloudTab:(id)a0 userInput:(id)a1 forQueryID:(long long)a2;

@end
