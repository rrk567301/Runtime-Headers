@class SCContentFilterAppsAndWindowsPinnedToDisplayInformation, NSArray, SCWindow, SCContentFilterDisplayInformation, SCContentFilterDesktopIndependentWindowInformation, SCDisplay;

@interface SCContentFilter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) SCContentFilterDisplayInformation *displayInfo;
@property (readonly, nonatomic) SCContentFilterAppsAndWindowsPinnedToDisplayInformation *appsAndWindowsPinnedToDisplayInfo;
@property (readonly, nonatomic) SCContentFilterDesktopIndependentWindowInformation *desktopIndependentWindowInfo;
@property (retain, nonatomic) NSArray *includedWindows;
@property (retain, nonatomic) NSArray *excludedWindows;
@property (retain, nonatomic) NSArray *includedApplications;
@property (retain, nonatomic) NSArray *excludedApplications;
@property (retain, nonatomic) SCWindow *individualWindow;
@property (retain, nonatomic) SCDisplay *display;
@property (nonatomic) BOOL shareAll;
@property (nonatomic) long long filterType;

+ (BOOL)isValidContentFilterType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithDesktopIndependentWindow:(id)a0;
- (id)initWithDisplayId:(unsigned int)a0;
- (id)initWithDisplay:(id)a0 excludingWindows:(id)a1;
- (id)initWithDisplay:(id)a0 includingWindows:(id)a1;
- (id)initWithDisplay:(id)a0 includingApplications:(id)a1 exceptingWindows:(id)a2;
- (id)initWithDisplay:(id)a0 excludingApplications:(id)a1 exceptingWindows:(id)a2;
- (BOOL)checkApplications:(id)a0 doesContainWindow:(id)a1;
- (void)printProperties:(id)a0;
- (BOOL)isEqualToSCContentFilter:(id)a0;
- (id)initSharingNothing;
- (id)initWithWindowId:(unsigned int)a0;

@end
