@protocol POUserIdentifierProvider, POJWKSStorageProvider;

@interface POPlatformSSOCoreListener : POAgentListener

@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;
@property (retain) id<POJWKSStorageProvider> jwksStorageProvider;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initForLogin:(BOOL)a0 identifierProvider:(id)a1 jwksStroageProvider:(id)a2;

@end
