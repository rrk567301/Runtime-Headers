@class SHSession, SHCatalog, SHManagedShazamCatalog;
@protocol SHSessionDelegate;

@interface SHManagedSession : NSObject

@property (retain) SHSession *session;
@property (retain) SHManagedShazamCatalog *managedShazamCatalog;
@property (readonly) SHCatalog *catalog;
@property (weak) id<SHSessionDelegate> delegate;
@property BOOL sendNotifications;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPartnerName:(id)a0;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)a0;
- (void)stopMatchingAmbientAudioSnippet;

@end
