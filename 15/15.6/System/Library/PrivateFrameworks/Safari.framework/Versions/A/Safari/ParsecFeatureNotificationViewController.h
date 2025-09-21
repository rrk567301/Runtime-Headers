@class NSArray;
@protocol WBSParsecBag;

@interface ParsecFeatureNotificationViewController : NSViewController {
    NSArray *_iconFilenamesForSupportedDomains;
}

@property (readonly, nonatomic) id<WBSParsecBag> bag;
@property (readonly, nonatomic) double preferredMinimumWidth;
@property (readonly, nonatomic) double preferredHeightAtCurrentWidth;

+ (char)_notificationHasEverBeenShown;
+ (void)_setNotificationHasEverBeenShown:(char)a0;
+ (char)notificationNeedsToBeShownWithBag:(id)a0;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithBag:(id)a0;
- (id)_featureNotificationView;
- (id)_iconFilenames;
- (id)initWithNibName:(id)a0 bundle:(id)a1 bag:(id)a2;

@end
