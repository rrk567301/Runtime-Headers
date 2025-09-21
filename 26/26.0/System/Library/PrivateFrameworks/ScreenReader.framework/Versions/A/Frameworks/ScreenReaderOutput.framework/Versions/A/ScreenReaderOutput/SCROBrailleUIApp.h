@class NSString;
@protocol SCROBrailleUIAppDelegate;

@interface SCROBrailleUIApp : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) id<SCROBrailleUIAppDelegate> delegate;

+ (BOOL)isUnitTesting;
+ (void)initialize;
+ (id)allApps;
+ (void)setIsUnitTesting:(BOOL)a0;
+ (id)appForView:(id)a0;
+ (void)closeAllApps;
+ (void)closeAllAppsExceptTheLowerMostView;
+ (BOOL)isHidingViews;
+ (void)showViews;

- (void)lazyLoad;
- (id)initWithDelegate:(id)a0;
- (void)open;
- (id)views;
- (void)close;
- (void).cxx_destruct;
- (void)handleAction:(id)a0;
- (void)_requestRefreshBraille;
- (void)handleResponse:(id)a0 forRequest:(id)a1;

@end
