@interface SLShareableContentActionHandler : NSObject

@property (class, readonly, nonatomic) SLShareableContentActionHandler *sharedActionHandler;

- (void)performAction:(id)a0;
- (id)frontmostWindow;
- (id)itemProviderForWindow:(id)a0;
- (void)performFetchShareableContentMetadataAction:(id)a0;
- (void)performFetchShareableContentAction:(id)a0;
- (void)performSendShareableContentAction:(id)a0;
- (void)performActions:(id)a0;

@end
