@class NSString;
@protocol SKUIRemoteEngagementClientProtocol;

@interface SKUIRemoteEngagementRemoteViewController : NSRemoteViewController <SKUIRemoteEngagementClientProtocol>

@property (weak, nonatomic) id<SKUIRemoteEngagementClientProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedObject;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)engagementTaskDidFinishWithResult:(id)a0 resultData:(id)a1 error:(id)a2 completion:(id /* block */)a3;

@end
