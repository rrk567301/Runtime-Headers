@class TVISAmbientRemoteProxyHandler, NSString, NSXPCConnection;
@protocol TVISAmbientPosterServiceDelegate;

@interface TVISAmbientPosterServiceProxy : NSObject <TVISAmbientPosterServiceObserverInterface, TVISAmbientPosterServiceInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) TVISAmbientRemoteProxyHandler *remoteProxyHandler;
@property (weak, nonatomic) id<TVISAmbientPosterServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
