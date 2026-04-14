@class NSString, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _notificationType;
    NSString *_notificationName;
    id _observerToken;
    double _coalescingInterval;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_createCoalescingTimer;
- (void)_stop;
- (id)description;
- (void)_start;
- (void).cxx_destruct;
- (void)_triggerRefresh;
- (id)initWithCoder:(id)a0;
- (id)initWithNotification:(id)a0 type:(long long)a1 coalescingInterval:(double)a2;
- (BOOL)isEqual:(id)a0;
- (void)_scheduleTriggerRefresh;
- (unsigned long long)hash;
- (id)initWithNotification:(id)a0 type:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
