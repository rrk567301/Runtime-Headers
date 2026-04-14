@class NSString, NSSharingService;

@interface _NSCloudSharingServiceDelegate : NSObject <NSCloudSharingServiceDelegate> {
    NSSharingService *service;
    id /* block */ parentWindowProvider;
    id /* block */ completionHandler;
}

@property (readonly) BOOL preShareFailureMeansStopSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)initWithService:(id)a0 parentWindowProvider:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
