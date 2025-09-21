@class NSArray, NSString, SMConfMigratorPlugin, NSURL, NSObject, NSSet;

@interface SMConfMigratorRule : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) SMConfMigratorPlugin *plugin;
@property char attemptedPluginLoad;
@property (retain) NSObject *identifier;
@property (retain) NSArray *children;
@property unsigned long long actionType;
@property unsigned long long context;
@property (retain) NSURL *path;
@property (retain) NSString *maximumSourceVersion;
@property (retain) NSString *minimumSourceVersion;
@property (retain) NSSet *disallowedSourceVersions;
@property (retain) NSURL *alternateDestination;
@property (retain) NSSet *skipChecksums;
@property char overwriteExistingPath;
@property char disableMigratedVersion;
@property char skipIfDestinationExists;
@property char skipIfLegacyServer;
@property char deferredCopy;
@property (retain) NSString *skipIfOlderThan;
@property (retain) NSArray *toolArguments;
@property (retain) NSURL *toolPath;
@property char allowSIP;
@property char runsAfterRestart;
@property (readonly, getter=isDefaultedCopyRule) char defaultedCopyRule;

+ (void)executeSpecificPlugin:(id)a0;
+ (id)loadPlugin:(id)a0 forRequest:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)defaultedCopyRule;
- (double)estimateTime;
- (void)executePlugin;
- (id)initWithConfDict:(id)a0;
- (char)supportedFromSystem:(id)a0 toSystem:(id)a1 ofType:(unsigned long long)a2;

@end
