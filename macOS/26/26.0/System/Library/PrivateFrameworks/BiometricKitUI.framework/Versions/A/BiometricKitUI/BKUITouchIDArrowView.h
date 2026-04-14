@class NSTextField, NSString, CALayer, NSObject;
@protocol OS_dispatch_source, OS_os_log;

@interface BKUITouchIDArrowView : NSView {
    NSObject<OS_os_log> *_bkui_arrowview_log;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long imageIndex;
@property (retain, nonatomic) CALayer *arrowLayer;
@property (retain, nonatomic) NSTextField *labelView;
@property (copy, nonatomic) NSString *localizedString;

- (id)_initCommon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_animate;
- (id)_arrowImageForIndex:(unsigned long long)a0;

@end
