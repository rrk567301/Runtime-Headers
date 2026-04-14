@class NSString, NSColor;

@interface PXCPLCloudQuotaConciseSource : PXObservable {
    long long _view;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) NSColor *iconColor;
@property (readonly, nonatomic) id /* block */ action;

+ (id)_placement;

- (void)setAction:(id /* block */)a0;
- (id)initWithView:(long long)a0;
- (id)init;
- (void)setIcon:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setIconColor:(id)a0;
- (void)_handleInAppMessage:(id)a0;
- (void)currentInAppMessageDidChange:(id)a0;

@end
