@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *productName;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy) NSString *containingAppBundleIdentifier;

+ (id)productNameForBundleIdentifier:(id)a0;
+ (id)findContainingAppBundleIdentifierForIdentifier:(id)a0;
+ (id)mediaLibraryAttributionExceptionPlist;
+ (id)musicRecognitionSensorActivityAttributionExceptionPlist;
+ (BOOL)requiresMediaLibraryAttributionForBundleIdentifier:(id)a0;
+ (BOOL)requiresMusicRecognitionSensorActivityAttributionForBundleIdentifier:(id)a0;

- (id)initWithTask:(struct __SecTask { } *)a0;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 containingAppBundleIdentifier:(id)a1 teamIdentifier:(id)a2 productName:(id)a3;
- (id)initWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1;

@end
