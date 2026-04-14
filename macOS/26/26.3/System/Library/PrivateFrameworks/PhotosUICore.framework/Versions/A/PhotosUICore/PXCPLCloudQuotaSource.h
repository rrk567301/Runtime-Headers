@class NSString;

@interface PXCPLCloudQuotaSource : PXObservable

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *actionTitle;

+ (id)_placement;

- (id)init;
- (void).cxx_destruct;
- (void)setActionTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setState:(long long)a0;
- (void)_handleInAppMessage:(id)a0;
- (void)currentInAppMessageDidChange:(id)a0;

@end
