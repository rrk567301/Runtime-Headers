@class NSString, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _notificationType;
    NSString *_notificationName;
    id _observerToken;
    double _coalescingInterval;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_stop;
- (void)_start;
- (void)_createCoalescingTimer;
- (void)_scheduleTriggerRefresh;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNotification:(id)a0 type:(long long)a1 coalescingInterval:(double)a2;
- (void)_triggerRefresh;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithNotification:(id)a0 type:(long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
