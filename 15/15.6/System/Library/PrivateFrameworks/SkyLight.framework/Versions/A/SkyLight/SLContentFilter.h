@class NSString, NSSet;

@interface SLContentFilter : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int filterType;
@property (readonly, nonatomic) unsigned int windowID;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) char shareAll;
@property (readonly, nonatomic) NSSet *includedWindows;
@property (readonly, nonatomic) NSSet *includedApplications;
@property (retain, nonatomic) NSSet *includedPIDS;
@property (readonly, nonatomic) NSSet *excludedWindows;
@property (readonly, nonatomic) NSSet *excludedApplications;
@property (retain, nonatomic) NSSet *excludedPIDS;
@property (nonatomic) char hideMenuBar;
@property (nonatomic) char enforceSharingType;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)excludeMenuBar:(char)a0;
- (void)enforceSharingType:(char)a0;
- (id)initWithDesktopIndependentWindow:(unsigned int)a0;
- (id)initWithDisplay:(unsigned int)a0;
- (id)initWithDisplay:(unsigned int)a0 application:(id)a1;
- (id)initWithDisplay:(unsigned int)a0 shareAll:(char)a1 includedWindows:(id)a2 includedApplications:(id)a3 excludedWindows:(id)a4 excludedApplications:(id)a5;
- (id)initWithDisplay:(unsigned int)a0 shareAll:(char)a1 includedWindows:(id)a2 includedApplications:(id)a3 includedPIDS:(id)a4 excludedWindows:(id)a5 excludedApplications:(id)a6 excludedPIDS:(id)a7;
- (id)initWithDisplay:(unsigned int)a0 window:(unsigned int)a1;

@end
