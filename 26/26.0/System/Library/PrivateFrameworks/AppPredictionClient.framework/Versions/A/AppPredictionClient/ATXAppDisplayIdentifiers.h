@class NSSet;

@interface ATXAppDisplayIdentifiers : NSObject

@property (class, readonly, nonatomic) NSSet *allIdentifiers;
@property (class, readonly, nonatomic) NSSet *appIdentifiers;
@property (class, readonly, nonatomic) NSSet *appIdentifiersExcludingRemoteApps;

+ (id)_allIdentifiersIncludingRemoteApps:(BOOL)a0 includeInternalMacOSApps:(BOOL)a1;
+ (id)_appIdentifiersIncludingRemoteApps:(BOOL)a0 includeInternalMacOSApps:(BOOL)a1;
+ (void)_processIdentifiersFromEnumerator:(id)a0 intoSet:(id)a1 includeInternalMacOSApps:(BOOL)a2;
+ (BOOL)isWidgetOrWebClipIdentifier:(id)a0;
+ (BOOL)supportsAppWithBundleID:(id)a0;
+ (BOOL)supportsAppWithRecord:(id)a0;

@end
