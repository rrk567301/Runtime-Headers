@class NSString;

@interface XCTApplicationStateSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *path;
@property (readonly) unsigned long long runState;
@property (readonly) int processID;
@property (readonly) unsigned long long activationPolicy;
@property (readonly) unsigned long long eventID;
@property (getter=isTrackingPID) BOOL trackingPID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initNotRunningWithBundleID:(id)a0 path:(id)a1;
- (id)initWithBundleID:(id)a0 path:(id)a1 runState:(unsigned long long)a2 processID:(int)a3 activationPolicy:(unsigned long long)a4 eventID:(unsigned long long)a5;

@end
