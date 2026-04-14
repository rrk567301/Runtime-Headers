@class SHCatalog, SHMatcherRequest, SHSession, SHManagedSessionDriver;
@protocol SHMatcher, SHSessionDelegate;

@interface SHManagedSession : NSObject

@property (readonly) SHSession *session;
@property (readonly) id<SHMatcher> shazamServiceConnection;
@property (readonly) SHManagedSessionDriver *sessionDriver;
@property (retain) SHMatcherRequest *inflightRequest;
@property (readonly) SHCatalog *catalog;
@property (weak) id<SHSessionDelegate> delegate;
@property BOOL sendNotifications;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCatalog:(id)a0;
- (void)stopMatchingAmbientAudioSnippet;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2 serviceConnection:(id)a3;
- (id)initWithPartnerName:(id)a0;
- (BOOL)isUsingCustomCatalog:(id)a0;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)a0;

@end
