@class CSImportAgentConnection;
@protocol CSIndexExtensionDelegate;

@interface CSImportAgent : NSObject

@property (readonly, nonatomic) CSImportAgentConnection *agentConnection;
@property (weak) id<CSIndexExtensionDelegate> extensionDelegate;

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (void)extensionsLoaded;

@end
