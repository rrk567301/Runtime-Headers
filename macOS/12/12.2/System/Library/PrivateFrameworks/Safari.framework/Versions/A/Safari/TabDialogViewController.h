@class NSView;
@protocol TabDialogConfiguration, TabDialogView;

@interface TabDialogViewController : NSViewController

@property (readonly, nonatomic) id<TabDialogConfiguration> configuration;
@property (retain) NSView<TabDialogView> *view;
@property (readonly, nonatomic) struct { int webProcessID; unsigned long long tabID; } slot;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dialogConfiguration:(id)a2 slot:(struct { int x0; unsigned long long x1; })a3;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1;
- (void)updateCurrentDialogConfiguration:(id)a0;

@end
