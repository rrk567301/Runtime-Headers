@class NSArray, _MKPlaceViewController, NSButton;

@interface MKInfoCardReportAProblemController : NSObject {
    NSArray *_reportAProblemControls;
    NSButton *_bookmarksContainerReportAProblemButton;
    NSButton *_dropPinContainerReportAProblemButton;
    NSButton *_RAPContainerReportAProblemButton;
}

@property (weak, nonatomic) _MKPlaceViewController *infoCardController;
@property (nonatomic) BOOL showReportAProblem;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)reportAProblem:(id)a0;
- (BOOL)isReportAProblemAvailable;

@end
