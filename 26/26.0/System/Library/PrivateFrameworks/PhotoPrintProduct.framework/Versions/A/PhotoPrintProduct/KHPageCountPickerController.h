@class NSSlider, NSString, NSTextField;
@protocol KHPageCountPickerDelegate;

@interface KHPageCountPickerController : UXViewController

@property (retain) NSTextField *pageCountLabel;
@property (retain) NSTextField *pageCountTitle;
@property (weak) id<KHPageCountPickerDelegate> delegate;
@property (retain) NSSlider *pageCountSlider;
@property (nonatomic) unsigned long long pageCount;
@property (copy) NSString *accessibilityValueDescriptionFormatString;

- (void)loadView;
- (void).cxx_destruct;
- (void)sliderUpdated:(id)a0;

@end
