@class NSObject;
@protocol OS_xpc_object;

@interface _DKSyncType : NSObject <NSSecureCoding> {
    char _isSingleDevice;
    char _forceSync;
    char _isInitialSync;
    char _isPeriodicSync;
    char _isTriggeredSync;
    char _didActivatePeer;
    char _didReceivePush;
    char _didAddSyncedEvents;
    char _didDeleteSyncedEvents;
    unsigned long long _urgency;
    double _periodicSyncInterval;
    NSObject<OS_xpc_object> *_xpcActivity;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
