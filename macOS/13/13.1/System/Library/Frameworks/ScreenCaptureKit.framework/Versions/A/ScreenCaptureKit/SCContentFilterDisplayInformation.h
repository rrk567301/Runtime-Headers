@class NSArray, SCDisplay;

@interface SCContentFilterDisplayInformation : NSObject

@property (readonly, nonatomic) SCDisplay *display;
@property (readonly, nonatomic) NSArray *excludedApplications;
@property (readonly, nonatomic) NSArray *includedApplicationWindows;
@property (readonly, nonatomic) NSArray *excludedWindows;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0 excludedApps:(id)a1 includedAppWindows:(id)a2 excludedWindows:(id)a3;
- (BOOL)isEqualToSCContentFilterDisplayInformation:(id)a0;

@end
