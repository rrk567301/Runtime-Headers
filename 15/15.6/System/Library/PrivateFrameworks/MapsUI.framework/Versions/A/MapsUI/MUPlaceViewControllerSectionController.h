@class MUPlaceSectionFooterViewModel, NSArray, NSView, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, NSViewController, NSString;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceViewControllerSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    NSViewController *_viewController;
}

@property (readonly, nonatomic) char hasContent;
@property (readonly, nonatomic) NSView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) char active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) NSViewController *sectionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 viewController:(id)a1;
- (char)isImpressionable;

@end
