@class NSString, NSURL, NSImage;

@interface SMSystem_Daemon_Ineligible : SMSystem_Daemon

@property (retain) NSString *systemName;
@property (retain) NSURL *path;
@property unsigned long long systemType;
@property (readonly) NSString *reason;
@property char obsoleteSoftware;
@property (retain) NSImage *overrideIcon;

- (char)enabled;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)initWithPath:(id)a0 andReason:(id)a1;
- (id)initWithURL:(id)a0 systemName:(id)a1 andReason:(id)a2;
- (id)initWithURL:(id)a0 systemName:(id)a1 andReason:(id)a2 pc:(char)a3;
- (char)selectableSystem;
- (id)warningBadge;

@end
