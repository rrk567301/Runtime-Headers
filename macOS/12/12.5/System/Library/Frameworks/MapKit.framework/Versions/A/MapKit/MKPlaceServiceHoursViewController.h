@class MKPlaceSectionHeaderView, NSScrollView, NSString, MKMapItem, NSStackView;
@protocol MKPlaceServiceHoursViewControllerProtocol;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    BOOL _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    long long _type;
    NSStackView *_stackView;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) NSScrollView *scrollView;
@property (weak, nonatomic) id<MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleString;
+ (id)placeServiceHoursWithMapItem:(id)a0 type:(long long)a1;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)a0 type:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateServiceHourRows;
- (void)captureCloseAnalytics;
- (unsigned long long)_maxRows;
- (void)_showAllHeaderButtonTapped;

@end
