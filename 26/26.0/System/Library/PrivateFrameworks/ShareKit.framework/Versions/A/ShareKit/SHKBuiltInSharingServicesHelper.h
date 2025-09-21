@interface SHKBuiltInSharingServicesHelper : NSObject

+ (id)workQueue;
+ (id)builtInSharingServicesForItems:(id)a0;
+ (void)addBuiltInServicesToServices:(id)a0 forItems:(id)a1 collaborationItems:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (void)builtInSharingServicesForItems:(id)a0 completion:(id /* block */)a1;
+ (void)builtInSharingServicesOnQueueForItems:(id)a0 completion:(id /* block */)a1;
+ (id)builtinActivityClasses;
+ (id)builtinCollaborationActivityClasses;
+ (id)collaborationSharingServicesForItems:(id)a0;
+ (void)collaborationSharingServicesForItems:(id)a0 completion:(id /* block */)a1;
+ (void)collaborationSharingServicesOnQueueForItems:(id)a0 completion:(id /* block */)a1;

@end
