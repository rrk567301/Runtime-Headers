@class NSString;
@protocol SCROBrailleUIAppDelegate;

@interface SCROBrailleUIApp : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) id<SCROBrailleUIAppDelegate> delegate;

+ (void)initialize;
+ (id)allApps;
+ (BOOL)isUnitTesting;
+ (void)setIsUnitTesting:(BOOL)a0;
+ (id)appForView:(id)a0;
+ (void)closeAllApps;
+ (void)closeAllAppsExceptTheLowerMostView;
+ (BOOL)isHidingViews;
+ (void)showViews;

- (void)open;
- (id)initWithDelegate:(id)a0;
- (void)lazyLoad;
- (id)views;
- (void).cxx_destruct;
- (void)close;
- (void)handleAction:(id)a0;
- (void)_requestRefreshBraille;
- (void)handleResponse:(id)a0 forRequest:(id)a1;

@end
