@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject

@property (readonly, nonatomic) unsigned long long accessLevel;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0;
+ (id)accessSpecifierAppropriateForXPCConnection:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithAccessLevel:(unsigned long long)a0 associatedAppBundleIdentifier:(id)a1;

@end
