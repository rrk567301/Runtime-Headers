@class NSString;

@interface PXTipsHelper_Swift : NSObject {
    void /* unknown type, empty encoding */ popovers;
}

@property (class, nonatomic, readonly) NSString *curatedLibrarySwitchTipID;
@property (class, nonatomic, readonly) PXTipsHelper_Swift *shared;

- (void)preparePopoverTip:(id)a0 delegate:(id)a1 sourceView:(id)a2 after:(double)a3;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (BOOL)isTipPresentable:(id)a0;
- (BOOL)isTipHidden:(id)a0;
- (void)hideTip:(id)a0 completion:(id /* block */)a1;
- (void)unhideTip:(id)a0;
- (void)setTipActionPerformed:(id)a0;
- (void)setTip:(id)a0 isPresentable:(BOOL)a1;

@end
