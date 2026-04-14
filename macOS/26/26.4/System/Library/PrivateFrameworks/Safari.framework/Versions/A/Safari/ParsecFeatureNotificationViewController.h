@class NSArray;
@protocol WBSParsecBag;

@interface ParsecFeatureNotificationViewController : NSViewController {
    NSArray *_iconFilenamesForSupportedDomains;
}

@property (readonly, nonatomic) id<WBSParsecBag> bag;
@property (readonly, nonatomic) double preferredMinimumWidth;
@property (readonly, nonatomic) double preferredHeightAtCurrentWidth;

+ (BOOL)_notificationHasEverBeenShown;
+ (void)_setNotificationHasEverBeenShown:(BOOL)a0;
+ (BOOL)notificationNeedsToBeShownWithBag:(id)a0;

- (id)initWithBag:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_featureNotificationView;
- (id)_iconFilenames;
- (id)initWithNibName:(id)a0 bundle:(id)a1 bag:(id)a2;

@end
