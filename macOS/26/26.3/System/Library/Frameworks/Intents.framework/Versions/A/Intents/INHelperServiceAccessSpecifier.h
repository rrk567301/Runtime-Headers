@class NSString, NSData;

@interface INHelperServiceAccessSpecifier : NSObject

@property (readonly, nonatomic) unsigned long long accessLevel;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSData *associatedAuditToken;

+ (void)initialize;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierAppropriateForXPCConnection:(id)a0;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 auditToken:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithAccessLevel:(unsigned long long)a0 associatedAppBundleIdentifier:(id)a1 auditToken:(id)a2;

@end
