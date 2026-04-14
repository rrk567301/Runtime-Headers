@interface SFCollaborationUserDefaultsManager : NSObject

+ (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
+ (void)requestCollaborativeModeForContentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_createRemoteDataProxyWithErrorHandler:(id /* block */)a0;

@end
