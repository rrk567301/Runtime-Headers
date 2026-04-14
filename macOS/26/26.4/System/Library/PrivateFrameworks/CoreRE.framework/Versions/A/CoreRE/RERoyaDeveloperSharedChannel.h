@class NSString, NSXPCConnection;

@interface RERoyaDeveloperSharedChannel : NSObject <RERoyaDeveloperProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSString *serviceName;

+ (id)sharedChannel;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)sendRESceneAssetWithPath:(id)a0 attributes:(id)a1;
- (oneway void)sendRESceneCALayerAtlas:(id)a0 attributes:(id)a1;
- (void)tryBuildConnection;

@end
