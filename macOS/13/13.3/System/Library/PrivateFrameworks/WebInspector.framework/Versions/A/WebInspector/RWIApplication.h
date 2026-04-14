@class NSString, NSArray, RWITarget, NSMutableDictionary;
@protocol RWIApplicationDelegate;

@interface RWIApplication : NSObject {
    NSMutableDictionary *_debuggables;
    NSMutableDictionary *_drivables;
}

@property (readonly, nonatomic, getter=isProxy) BOOL proxy;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) unsigned long long debuggerAvailability;
@property (weak, nonatomic) id<RWIApplicationDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) RWITarget *target;
@property (readonly, nonatomic) NSArray *debuggables;
@property (readonly, nonatomic) NSArray *drivables;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) long long automationAvailability;
@property (readonly, nonatomic) BOOL isCurrentTarget;
@property (readonly, nonatomic) BOOL isCurrentApplication;

+ (id)identifierForPID:(int)a0;

- (void).cxx_destruct;
- (void)wakeUpDebuggables;
- (void)removeDrivable:(id)a0;
- (id)hostApplication;
- (void)_notifyClientsThatApplicationStateChanged;
- (void)addDebuggable:(id)a0;
- (void)addDrivable:(id)a0;
- (void)changeReadyState:(BOOL)a0;
- (void)createDrivableForSession:(id)a0;
- (id)debuggableWithPageId:(id)a0;
- (id)drivableWithTargetIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 name:(id)a2 isProxy:(BOOL)a3 debuggerAvailability:(unsigned long long)a4 isReady:(BOOL)a5 target:(id)a6;
- (void)removeDebuggable:(id)a0;
- (void)setAutomationAvailability:(long long)a0;
- (void)setDebuggerAvailability:(unsigned long long)a0;

@end
