@class NSSlider, NSArray, NSTextField;

@interface KHPhotoCountFilterController : NSViewController

@property (retain, nonatomic) NSSlider *photoCountSlider;
@property (retain, nonatomic) NSTextField *photoCountTitle;
@property (retain, nonatomic) NSArray *photoCounts;
@property (nonatomic) unsigned long long currentPhotoCount;
@property (nonatomic) BOOL enabled;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)sliderUpdated:(id)a0;

@end
