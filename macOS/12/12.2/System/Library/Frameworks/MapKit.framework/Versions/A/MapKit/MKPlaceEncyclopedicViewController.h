@class NSString, MKPlaceTextBlockCell, NSMutableArray;
@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    BOOL _textBlockExpanded;
    MKPlaceTextBlockCell *_textCell;
    NSMutableArray *_factoidCells;
}

@property (retain, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (weak, nonatomic) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)_updateViews;
- (id)_textBlockTitle;
- (void)_viewEncyclopedicContent;
- (id)_factoids;
- (id)_textBlockText;

@end
