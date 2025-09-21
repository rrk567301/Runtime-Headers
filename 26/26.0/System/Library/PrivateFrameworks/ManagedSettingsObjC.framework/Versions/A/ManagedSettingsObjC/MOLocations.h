@class NSURL, NSString;

@interface MOLocations : NSObject <MOLocatable>

@property (class, readonly) NSURL *effectiveSettingsPath;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)screenTimeDataVaultDirectory;
+ (id)sharedDirectory;
+ (id)effectiveSettingsDirectory;


@end
