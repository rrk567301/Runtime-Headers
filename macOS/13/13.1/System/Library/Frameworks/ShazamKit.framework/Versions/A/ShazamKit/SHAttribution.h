@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *productName;
@property (readonly, copy) NSString *containingAppBundleIdentifier;

+ (id)productNameForBundleIdentifier:(id)a0;
+ (BOOL)requiresAttributionForBundleIdentifier:(id)a0;
+ (id)attributionExceptionPlist;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)configureAttributionForTask:(struct __SecTask { } *)a0;
- (void)configureAttributionForConnection:(id)a0;

@end
