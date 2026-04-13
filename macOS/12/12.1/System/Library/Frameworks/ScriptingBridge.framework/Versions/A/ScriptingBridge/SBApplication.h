@protocol SBApplicationDelegate;

@interface SBApplication : SBObject <NSCoding>

@property (readonly, getter=isRunning) BOOL running;
@property (retain) id<SBApplicationDelegate> delegate;
@property unsigned int launchFlags;
@property int sendMode;
@property long long timeout;

+ (id)currentApplication;
+ (id)applicationWithProcessIdentifier:(int)a0;
+ (void)loadScriptingAdditions;
+ (void)ensureScriptingAdditionsLoaded;
+ (id)applicationWithURL:(id)a0;
+ (id)applicationWithBundleIdentifier:(id)a0;
+ (id)standardAdditions;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithContext:(id)a0;
- (void)activate;
- (id)initWithProcessIdentifier:(int)a0;
- (BOOL)shouldCreateClasses;
- (Class)classForScriptingClass:(id)a0;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)objectWithSpecifier:(id)a0;

@end
