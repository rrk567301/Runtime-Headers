@class NSString, PXStatusView, PXCPLUIStatusProvider, PXCPLStatusController;

@interface PXPhotosGridPlaceholderStatusController : NSObject {
    BOOL _presentCPLStatus;
    NSString *_fallbackTitle;
    NSString *_fallbackMessage;
    PXStatusView *_statusView;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCPLStatusController *_statusController;
}

@property (readonly, nonatomic) PXStatusView *statusView;

- (id)init;
- (void).cxx_destruct;
- (id)_createCPLUIStatusProvider;
- (void)setCplUIStatusProvider:(id)a0;
- (void)_refreshCPLUIStatusProvider;
- (id)initForPresentingCPLStatus:(BOOL)a0 fallbackTitle:(id)a1 fallbackMessage:(id)a2;
- (void)_systemPhotoLibraryDidChange;

@end
