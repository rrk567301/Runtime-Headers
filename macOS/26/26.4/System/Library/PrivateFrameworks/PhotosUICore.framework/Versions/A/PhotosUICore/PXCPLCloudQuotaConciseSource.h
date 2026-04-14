@class NSString, NSColor;
@protocol PXPresentationEnvironment;

@interface PXCPLCloudQuotaConciseSource : PXObservable {
    long long _placement;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) NSColor *iconColor;
@property (readonly, nonatomic) id /* block */ action;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;

+ (id)_placement;

- (void)setAction:(id /* block */)a0;
- (void)setTitle:(id)a0;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPlacement:(long long)a0;
- (void)setIconColor:(id)a0;
- (id /* block */)_actionForMessageAction:(id)a0;
- (void)_handleInAppMessage:(id)a0;
- (void)_presentInAppAlert:(id)a0;
- (void)currentInAppMessageDidChange:(id)a0;

@end
