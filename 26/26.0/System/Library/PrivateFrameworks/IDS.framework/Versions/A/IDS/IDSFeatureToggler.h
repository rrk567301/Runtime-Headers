@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IDSFeatureToggler : NSObject

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithService:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)retrieveFeatureToggleStateForOptions:(id)a0 completion:(id /* block */)a1;
- (void)updateFeatureToggleStateWithOptions:(id)a0 completion:(id /* block */)a1;

@end
