@class NSString, NSBundle;

@interface ScreenSaverModule : NSObject <NSCopying> {
    NSString *_moduleName;
    NSString *_displayName;
    NSString *_path;
    NSBundle *_bundle;
    id _representedObject;
    int _type;
    BOOL _enabled;
    BOOL _archCompatible;
    BOOL _requiresGraphicsAcceleration;
    BOOL _hasConfigureSheet;
    int _archToUse;
}

+ (id)moduleWithDictionary:(id)a0;
+ (id)moduleWithName:(id)a0;
+ (id)moduleWithPath:(id)a0;
+ (id)localizedSaverNameForPath:(id)a0;
+ (id)moduleFromLegacyDefaults:(id)a0;
+ (id)floatingMessageModuleWithMessage:(id)a0;

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (int)type;
- (void)setType:(int)a0;
- (void)setEnabled:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)enabled;
- (id)path;
- (void)setName:(id)a0;
- (void)setRepresentedObject:(id)a0;
- (id)bundleID;
- (long long)caseInsensitiveCompare:(id)a0;
- (id)displayName;
- (void)setPath:(id)a0;
- (id)dictionaryRepresentation;
- (id)bundle;
- (void)setDisplayName:(id)a0;
- (id)representedObject;
- (id)thumbnail;
- (BOOL)hasConfigureSheet;
- (void)presentConfigureSheetWithCompletionBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1;
- (id)loadViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(BOOL)a1;
- (void)requestConfigurationSheetViewController:(id /* block */)a0;
- (void)requestConfigurationViewController:(id /* block */)a0;
- (BOOL)is32bitOnly;
- (void)addMessageTracerEntry;
- (BOOL)isScreenSaver;
- (BOOL)isQC;
- (BOOL)requiresGraphicsAcceleration;
- (void)setRequiresGraphicsAcceleration:(BOOL)a0;
- (id)defaultsName;
- (id)crashReporterString;
- (BOOL)isCompatibleWithCurrentArch;
- (int)architectureToUse;
- (id)saverPath;
- (BOOL)signedByApple;
- (BOOL)canRunAtLoginWindow;

@end
