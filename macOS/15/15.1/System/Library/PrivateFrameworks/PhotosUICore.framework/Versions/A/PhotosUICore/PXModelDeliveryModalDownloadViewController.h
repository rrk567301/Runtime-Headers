@class PXModelDeliveryProgressObjCViewController;

@interface PXModelDeliveryModalDownloadViewController : UXViewController

@property (retain, nonatomic) PXModelDeliveryProgressObjCViewController *progressController;

- (id)init;
- (void).cxx_destruct;
- (void)setErrorState:(id)a0;
- (void)clearErrorState;
- (void)createViewsWithCancelBlock:(id /* block */)a0 revertBlock:(id /* block */)a1;
- (void)reportProgress:(double)a0 stage:(unsigned long long)a1;

@end
