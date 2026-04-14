@protocol SHKRTSService;

@interface SHKRTSSharingService : SHKSharingService

@property (readonly, nonatomic) id<SHKRTSService> service;

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)_performRTSRequestForFileURL:(id)a0 completion:(id /* block */)a1;

@end
