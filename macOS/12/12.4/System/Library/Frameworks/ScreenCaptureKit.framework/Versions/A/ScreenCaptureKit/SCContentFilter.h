@class NSArray, SCWindow, SCDisplay;

@interface SCContentFilter : NSObject

@property (retain, nonatomic) NSArray *includedWindows;
@property (retain, nonatomic) NSArray *excludedWindows;
@property (retain, nonatomic) NSArray *includedApplications;
@property (retain, nonatomic) NSArray *excludedApplications;
@property (retain, nonatomic) SCWindow *individualWindow;
@property (retain, nonatomic) SCDisplay *display;
@property (nonatomic) BOOL shareAll;

- (void).cxx_destruct;
- (id)initWithDesktopIndependentWindow:(id)a0;
- (void)printProperties:(id)a0;
- (BOOL)checkApplications:(id)a0 doesContainWindow:(id)a1;
- (id)initWithDisplay:(id)a0 excludingWindows:(id)a1;
- (id)initWithDisplay:(id)a0 includingWindows:(id)a1;
- (id)initWithDisplay:(id)a0 includingApplications:(id)a1 exceptingWindows:(id)a2;
- (id)initWithDisplay:(id)a0 excludingApplications:(id)a1 exceptingWindows:(id)a2;

@end
