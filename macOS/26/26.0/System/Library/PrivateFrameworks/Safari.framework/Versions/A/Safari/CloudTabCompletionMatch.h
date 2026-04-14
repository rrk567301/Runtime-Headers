@class WBSCloudTab;
@protocol WBSCloudTabProvider;

@interface CloudTabCompletionMatch : WBSURLCompletionMatch

@property (readonly, nonatomic) WBSCloudTab *cloudTab;
@property (readonly, nonatomic) id<WBSCloudTabProvider> device;

- (id)init;
- (id)title;
- (void).cxx_destruct;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)initWithCloudTab:(id)a0 device:(id)a1 userInput:(id)a2 forQueryID:(long long)a3;

@end
