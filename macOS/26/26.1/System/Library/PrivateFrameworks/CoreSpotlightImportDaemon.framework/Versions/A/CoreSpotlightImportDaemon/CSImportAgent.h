@class CSImportAgentConnection;
@protocol CSIndexExtensionDelegate;

@interface CSImportAgent : NSObject

@property (readonly, nonatomic) CSImportAgentConnection *agentConnection;
@property (weak) id<CSIndexExtensionDelegate> extensionDelegate;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)extensionsLoaded;

@end
