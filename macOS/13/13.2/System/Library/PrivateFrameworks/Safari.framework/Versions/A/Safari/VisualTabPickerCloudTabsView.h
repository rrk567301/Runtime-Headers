@class NSString, NSMutableArray;
@protocol VisualTabPickerCloudTabsViewDelegate, VisualTabPickerCloudTabsViewDataSource;

@interface VisualTabPickerCloudTabsView : NSView <VisualTabPickerCloudDeviceViewDataSource, VisualTabPickerCloudDeviceViewDelegate> {
    NSMutableArray *_deviceViews;
    BOOL _hasDeviceViewsConstraints;
}

@property (weak, nonatomic) id<VisualTabPickerCloudTabsViewDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerCloudTabsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)updateConstraints;
- (void)_reloadData;
- (void)didRemoveAllCloudTabsForVisualTabPickerCloudDeviceView:(id)a0;
- (id)nameOfDeviceForVisualTabPickerCloudDeviceView:(id)a0;
- (unsigned long long)numberOfTabsForVisualTabPickerCloudDeviceView:(id)a0;
- (id)visualTabPickerCloudDeviceView:(id)a0 titleOfTabAtIndex:(unsigned long long)a1;
- (void)visualTabPickerCloudDeviceView:(id)a0 didSelectCloudTabAtIndex:(unsigned long long)a1;
- (void)visualTabPickerCloudDeviceView:(id)a0 didRemoveCloudTabAtIndex:(unsigned long long)a1;

@end
