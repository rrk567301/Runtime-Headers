@class NSDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface IASDiskImageInstallMedia : IASInstallMedia

@property void *diskImage;
@property (retain) NSDictionary *mountInfo;
@property (copy) NSURL *mountPoint;
@property (retain) NSObject<OS_dispatch_queue> *attachQueue;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)_updateProperties;
- (void)attachWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)detachWithOptions:(id)a0 completion:(id /* block */)a1;

@end
