@class NSString;

@interface PXTipsHelper : NSObject

@property (class, readonly, nonatomic) NSString *curatedLibrarySwitchTipID;

+ (void)setup;
+ (BOOL)isTipPresentable:(id)a0;
+ (void)hideTip:(id)a0 completion:(id /* block */)a1;
+ (void)unhideTip:(id)a0;
+ (void)setTipActionPerformed:(id)a0;
+ (void)setTip:(id)a0 isPresentable:(BOOL)a1;
+ (void)presentPopoverTip:(id)a0 sourceView:(id)a1 delegate:(id)a2 after:(double)a3;

@end
