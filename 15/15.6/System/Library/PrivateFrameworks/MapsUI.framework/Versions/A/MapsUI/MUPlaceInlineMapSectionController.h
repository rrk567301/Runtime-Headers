@class NSView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, MKPlaceInlineMapViewControllerConfiguration, NSViewController, MKPlaceInlineMapViewController, CLLocation, MKPlacePoisInlineMapViewController, MUPlaceSectionView;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceInlineMapSectionController : MUPlaceSectionController <MKPlaceInlineMapViewControllerDelegate, MUPlaceSectionControlling> {
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlacePoisInlineMapViewController *_poiInlineMapViewController;
    MUPlaceSectionView *_sectionView;
    MKPlaceInlineMapViewControllerConfiguration *_configuration;
}

@property (retain, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasContent;
@property (readonly, nonatomic) NSView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) char active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) NSViewController *sectionViewController;

- (void).cxx_destruct;
- (char)inlineMapViewControllerDidSelectMap:(id)a0;
- (void)_setupInlineMap;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (char)isImpressionable;
- (void)updateWithMapItem:(id)a0;

@end
