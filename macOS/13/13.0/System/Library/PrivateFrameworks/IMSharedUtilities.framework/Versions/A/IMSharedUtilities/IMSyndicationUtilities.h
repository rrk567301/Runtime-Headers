@class CKContainer;

@interface IMSyndicationUtilities : NSObject

@property (retain, nonatomic) CKContainer *ckContainer;

- (void).cxx_destruct;
- (id)bundleIDsForCollaborationURL:(id)a0;
- (id)bundleIDsForShareBearURL:(id)a0;
- (id)UTITypeForURL:(id)a0;
- (id)_bundleIDsForCollaborationApp:(unsigned long long)a0;
- (id)_URLSchemeForCollaborationApp:(unsigned long long)a0;
- (unsigned long long)_collaborationAppForURL:(id)a0;
- (id)_fetchCKBundleIDsForURL:(id)a0 returnLocalBundlesOnly:(BOOL)a1;

@end
