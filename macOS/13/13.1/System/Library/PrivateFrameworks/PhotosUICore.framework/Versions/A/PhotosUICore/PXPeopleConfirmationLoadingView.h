@class UXLabel, NSProgressIndicator, UXView;
@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UXView

@property (readonly, nonatomic) UXView *loadingStatusView;
@property (readonly, nonatomic) UXLabel *noneFoundLabel;
@property (readonly, nonatomic) NSProgressIndicator *loadingIndicator;
@property (readonly, nonatomic) id<PXPerson> person;
@property (nonatomic) unsigned long long loadingState;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 person:(id)a1 localizedName:(id)a2;

@end
