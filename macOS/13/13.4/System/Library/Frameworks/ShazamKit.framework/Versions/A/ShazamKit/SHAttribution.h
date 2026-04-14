@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *productName;
@property (readonly, copy) NSString *containingAppBundleIdentifier;

+ (id)productNameForBundleIdentifier:(id)a0;
+ (id)mediaLibraryAttributionExceptionPlist;
+ (BOOL)requiresMediaLibraryAttributionForBundleIdentifier:(id)a0;
+ (BOOL)requiresStaticSensorActivityAttributionForBundleIdentifier:(id)a0;
+ (id)staticSensorActivityAttributionExceptionPlist;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)configureAttributionForConnection:(id)a0;
- (void)configureAttributionForTask:(struct __SecTask { } *)a0;

@end
