@class NSString, NSURL, NSImage;

@interface SMSystem_Daemon_Ineligible : SMSystem_Daemon

@property (retain) NSString *systemName;
@property (retain) NSURL *path;
@property unsigned long long systemType;
@property (readonly) NSString *reason;
@property BOOL obsoleteSoftware;
@property (retain) NSImage *overrideIcon;

- (void).cxx_destruct;
- (BOOL)enabled;
- (id)accessibilityDescription;
- (BOOL)selectableSystem;
- (id)warningBadge;
- (id)initWithURL:(id)a0 systemName:(id)a1 andReason:(id)a2 pc:(BOOL)a3;
- (id)initWithURL:(id)a0 systemName:(id)a1 andReason:(id)a2;
- (id)initWithPath:(id)a0 andReason:(id)a1;

@end
