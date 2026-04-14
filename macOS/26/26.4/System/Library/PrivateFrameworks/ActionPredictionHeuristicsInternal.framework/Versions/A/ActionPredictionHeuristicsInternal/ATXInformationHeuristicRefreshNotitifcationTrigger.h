@class NSString, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _notificationType;
    NSString *_notificationName;
    id _observerToken;
    double _coalescingInterval;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithNotification:(id)a0 type:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_createCoalescingTimer;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)_scheduleTriggerRefresh;
- (id)initWithNotification:(id)a0 type:(long long)a1 coalescingInterval:(double)a2;
- (void)_stop;
- (id)description;
- (void)_triggerRefresh;
- (id)initWithCoder:(id)a0;
- (void)_start;

@end
