@class CSImportAgentConnection;
@protocol CSIndexExtensionDelegate;

@interface CSImportAgent : NSObject

@property (readonly, nonatomic) CSImportAgentConnection *agentConnection;
@property (weak) id<CSIndexExtensionDelegate> extensionDelegate;

- (void).cxx_destruct;
- (void)start;
- (id)init;
- (void)extensionsLoaded;

@end
