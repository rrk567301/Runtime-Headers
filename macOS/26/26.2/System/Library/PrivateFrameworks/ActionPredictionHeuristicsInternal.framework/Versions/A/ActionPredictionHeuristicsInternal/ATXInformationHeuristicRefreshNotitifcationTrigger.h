@class NSString, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _notificationType;
    NSString *_notificationName;
    id _observerToken;
    double _coalescingInterval;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_scheduleTriggerRefresh;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_stop;
- (void).cxx_destruct;
- (id)initWithNotification:(id)a0 type:(long long)a1;
- (id)description;
- (void)_start;
- (void)_createCoalescingTimer;
- (void)_triggerRefresh;
- (id)initWithNotification:(id)a0 type:(long long)a1 coalescingInterval:(double)a2;

@end
